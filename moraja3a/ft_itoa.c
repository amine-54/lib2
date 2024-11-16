#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	calc_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*fill_char(char	*p, unsigned int number, int len)
{
	while (number > 0)
	{
		ptr[len] = number % 10 + 48;
		number = number / 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	unsigned int	nbr;

	len = calc_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	else if (n == -2147483648)
	{
		nbr = 2147483648;
		ptr[0] = '-';
	}
	else if (n < 0)
	{
		ptr[0] = '-';
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)n;
	if (n != 0)
		s = fill_char(ptr, nbr, len - 1);
	return (ptr);
}


//naah too long. ghankheli nbr = -n i guess 
int main()
{
	char *tst;

	tst = ft_itoa(2147483647);
	printf("%s", tst);
}
