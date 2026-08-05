#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"
#define BLUE  "\033[0;34m"
#define CYAN  "\033[0;36m"


#include <stdio.h>
#include "ft_printf.h"

static void	check_return(char *test, int ret1, int ret2)
{
	if (ret1 == ret2)
		printf(GREEN "[OK]   %s (return: %d)\n\n" RESET, test, ret1);
	else
		printf(RED "[FAIL] %s (printf: %d | ft_printf: %d)\n\n" RESET,
			test, ret1, ret2);
}

int	main(void)
{
	int		ret1;
	int		ret2;
	int		n;
	char	*str;
	char	*null;

	n = 42;
	str = "Hello, 42!";
	null = NULL;

	printf(CYAN"===== CHAR =====\n"RESET);
	ret1 = printf("printf    : %c\n", 'A');
	ret2 = ft_printf("ft_printf : %c\n", 'A');
	check_return("%c", ret1, ret2);

	printf(CYAN"===== STRING =====\n"RESET);
	ret1 = printf("printf    : %s\n", str);
	ret2 = ft_printf("ft_printf : %s\n", str);
	check_return("%s", ret1, ret2);

	printf(BLUE"===== NULL STRING =====\n"RESET);
	ret1 = printf("printf    : %s\n", null);
	ret2 = ft_printf("ft_printf : %s\n", null);
	check_return("%s NULL", ret1, ret2);

	printf(GREEN"===== SIGNED =====\n"RESET);
	ret1 = printf("printf    : %d %i\n", -42, 2147483647);
	ret2 = ft_printf("ft_printf : %d %i\n", -42, 2147483647);
	check_return("%d %i", ret1, ret2);

	printf(GREEN"===== UNSIGNED =====\n"RESET);
	ret1 = printf("printf    : %u\n", 4294967295U);
	ret2 = ft_printf("ft_printf : %u\n", 4294967295U);
	check_return("%u", ret1, ret2);

	printf(GREEN"===== HEX LOWER =====\n"RESET);
	ret1 = printf("printf    : %x\n", 305441741);
	ret2 = ft_printf("ft_printf : %x\n", 305441741);
	check_return("%x", ret1, ret2);

	printf(GREEN"===== HEX UPPER =====\n"RESET);
	ret1 = printf("printf    : %X\n", 305441741);
	ret2 = ft_printf("ft_printf : %X\n", 305441741);
	check_return("%X", ret1, ret2);

	printf(GREEN"===== POINTER =====\n"RESET);
	ret1 = printf("printf    : %p\n", &n);
	ret2 = ft_printf("ft_printf : %p\n", &n);
	check_return("%p", ret1, ret2);

	printf(GREEN"===== NULL POINTER =====\n"RESET);
	ret1 = printf("printf    : %p\n", NULL);
	ret2 = ft_printf("ft_printf : %p\n", NULL);
	check_return("%p NULL", ret1, ret2);

	printf(GREEN"===== PERCENT =====\n"RESET);
	ret1 = printf("printf    : %%\n");
	ret2 = ft_printf("ft_printf : %%\n");
	check_return("%%", ret1, ret2);

	printf(GREEN"===== MIXED =====\n"RESET);
	ret1 = printf("%c %s %d %u %x %X %p %%\n",
		'Z', "forty-two", -123, 123U, 255, 255, &n);
	ret2 = ft_printf("%c %s %d %u %x %X %p %%\n",
		'Z', "forty-two", -123, 123U, 255, 255, &n);
	check_return("mixed", ret1, ret2);

	printf(CYAN"===== EDGE CASES =====\n"RESET);

	ret1 = printf("%d\n", 0);
	ret2 = ft_printf("%d\n", 0);
	check_return("zero", ret1, ret2);

	ret1 = printf("%d\n", (int)-2147483648);
	ret2 = ft_printf("%d\n", (int)-2147483648);
	check_return("INT_MIN", ret1, ret2);

	ret1 = printf("%s\n", "");
	ret2 = ft_printf("%s\n", "");
	check_return("empty string", ret1, ret2);

	ret1 = printf("%x\n", 0);
	ret2 = ft_printf("%x\n", 0);
	check_return("hex zero", ret1, ret2);

	return (0);
}
