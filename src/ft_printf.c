/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:16:15 by ganselmo          #+#    #+#             */
/*   Updated: 2026/02/27 21:37:11 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	index;
	int	len;

	index = 0;
	len = 0;
	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			len += ft_handle_conversion(format, index, args);
			index += 2;
		}
		else
		{
			write(1, &format[index], 1);
			index++;
			len++;
		}
	}
	va_end(args);
	return (len);
}

int	ft_handle_conversion(const char *format, int index, va_list args)
{
	char	sp;

	sp = format[index + 1];
	if (sp == 'c')
		return (ft_count_putchar(va_arg(args, int)));
	else if (sp == 's')
		return (ft_count_string(va_arg(args, const char *)));
	else if (sp == 'p')
		return (0);
	else if (sp == 'd')
		return (0);
	else if (sp == 'i')
		return (0);
	else if (sp == 'u')
		return (0);
	else if (sp == 'x')
		return (0);
	else if (sp == 'X')
		return (0);
	else if(sp == '%')
		return (0);
	else
		return (0);
}
