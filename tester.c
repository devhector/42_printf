#include "include/libftprintf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int a, b;


// ----

	a = printf("u: %x\n", INT_MAX);
	b = ft_printf("u: %x\n", INT_MAX);

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	ft_printf("ft: --- \n");

	ft_printf("a: %d\n", a);
	ft_printf("b: %d\n", b);

// ----

	a = printf("u: %x\n", INT_MIN);
	b = ft_printf("u: %x\n", INT_MIN);

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	ft_printf("ft: --- \n");

	ft_printf("a: %d\n", a);
	ft_printf("b: %d\n", b);

	return (0);
}