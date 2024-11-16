#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			all_size;

	i = 0;
	all_size = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));  //had case not necessary i guess
	if (count != 0 && ((all_size / count) != size))
		return (NULL);
	ptr = (unsigned char *)malloc(all_size);
	if (ptr == NULL)
		return (NULL);
	while (i < all_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr); /* Why You Don't Need to Cast Explicitly

In this case, you don't need an explicit cast when returning ptr as void* because C automatically allows implicit conversion from any type of pointer to void*. This is a built-in feature of C, and the compiler will automatically handle the conversion for you.*/
}

int main()
{
	int	*ptr1;
	int	*ptr2;
	int	i = 0;
	ptr1 = (int *)ft_calloc(4, sizeof(int));
	while (i < 4)
	{
		printf("%d ", ptr1[i]);
		i++;
	}
	printf("\n");

	ptr2 = (int *)calloc(4, sizeof(int));
	i = 0;
	while (i < 4)
	{
		printf("%d ", ptr2[i]);
		i++;
	}
	printf("\n");

	int	*ptr3;
	i = 0;
	ptr3 = (int *)calloc(0, sizeof(int));
	if (ptr3 == NULL)
		printf("rj3at NULL\n");
	else
	{
		printf("NON NULL pointer returned\n");
		free(ptr3);  //free in case malloc(0) does not return NULL
	}
}
