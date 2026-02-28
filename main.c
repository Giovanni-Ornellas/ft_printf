#include <stdio.h>
#include "ft_printf.h"

static void	test_string(char *s)
{
	int	ret;

	printf("String passada: %s\n", s ? s : "NULL");
	printf("Saída ft_count_string: ");
	ret = ft_count_string(s);
	printf("\nRetorno: %d\n", ret);
	printf("-----------------------------\n");
}

int	main(void)
{
	test_string("Hello World");
	test_string("");
	test_string("42 Rio");
	test_string(NULL);
	return (0);
}
