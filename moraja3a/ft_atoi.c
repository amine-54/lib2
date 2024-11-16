#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	result;

	i = 0;
	result = 0;
	is_neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * is_neg);
}
/*
int main ()
{
	
	printf("%d\n", atoi("$@125fe"));	
	printf("%d\n", ft_atoi("&@125fe"));

	printf("%d\n", atoi("000123"));
	printf("%d\n", ft_atoi("000123"));
	printf("%d\n", atoi("-+123"));
	printf("%d\n", ft_atoi("-+123"));
	printf("%d\n", ft_atoi("   123"));   // Output: 123
    printf("%d\n", ft_atoi("-42"));      // Output: -42
    printf("%d\n", ft_atoi("   +99"));   // Output: 99
    printf("%d\n", ft_atoi("  \t\n  -15abc")); // Output: -15
    printf("%d\n", ft_atoi("abc123"));   // Output: 0 (non-digit at start)
    printf("%d\n", ft_atoi("  2147483647")); // Output: 2147483647
    printf("%d\n", ft_atoi("-2147483648")); // Output: -2147483648
}*/
