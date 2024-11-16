#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp1;
	unsigned char *tmp2;
	size_t i;

	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	i = 0;
	while (len > 0)
	{
		tmp1[len] = tmp2[len];
		len--;
	}
	return (dst);
}

//?? a continue    
//  ghhalat.. chof tst folder f mac s7i7
//
//  
/*
int main()
{
    char tst[20] = "hello world";

    ft_memmove(NULL, NULL, 5);
	//memmove(NULL, NULL, 5);
    printf("%s", tst);
}*/

