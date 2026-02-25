/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganselmo <ganselmo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:16:15 by ganselmo          #+#    #+#             */
/*   Updated: 2026/02/25 00:03:25 by ganselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_conversion(const char *format, int index, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	index;

	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index += ft_handle_conversion(format, index, args);
		}
		else
		{
			write(1, &format[index], 1);
			index++;
		}
	}
	return (index);
}

int	ft_handle_conversion(const char *format, int index, va_list args)
{
	int	count;
	char	sp;

	sp = format[index];
	if (sp == 'c')
		return;
	else if (sp == 's')
		return;
	else if (sp == 'p')
		return;
	else if (sp == 'd')
		return;
	else if (sp == 'i')
		return;
	else if (sp == 'u')
		return;
	else if (sp == 'x')
		return;
	else if (sp == 'X')
		return;
	else if(sp == '%')
		return;
	else:
		return (0);
}
