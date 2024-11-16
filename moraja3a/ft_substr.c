#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len || len  == 0)
		return (ft_strdup("")); // hadchi kaydynamically allocate 1 byte of emptry strung, and add the null terminator
	//Returning malloc(sizeof(char)) will allocate 1 byte of memory, but it won't initialize that memory to anything (it could be garbage), and this is not the right way to represent an empty string.

	/*  3lach kanreturni hadchi blast "\0" direct ?
	 * If the function is expected to return a dynamically allocated string (as it does for substrings), returning "\0" may cause issues in contexts where the caller expects to manage the memory, e.g., freeing the returned string later.
	 *
	 * had ft_strdup("") li dert allocates memory to hold an empty string, which is malloc(1) followed by a null terminator. This allows the caller to free the returned string later, keeping the behavior consistent with the rest of the ft_substr function.
	 * Consistency: By returning an empty string created by malloc, you're maintaining the contract of returning dynamically allocated memory, even if the substring is empty.
	 * Advantages: This is a more flexible approach, especially when the function's signature is expected to return a pointer to dynamically allocated memory, making the implementation more robust.
	 */

	/* ila mabghitch nkhdem b strdup, khasni ndir:
	 * if (start >= slen)
    	{
        	ptr = (char *)malloc(1);  // Allocate 1 byte for empty string
        	if (!ptr)
            	return (NULL);
        	ptr[0] = '\0';  // Null-terminate the empty string
        	return (ptr);
    	}
		instead i can use ft_strdup("");
		*/

	i = 0;
	if (len > str_len - start)
		len = str_len = start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len)   //3lach madrtch while (s[i] && i < len) ??    7it len handlitha f le cas ila kant kbira o kant ghatfot str_len. handlitha f if statement li 9bel
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char	*ptr;

	ptr = ft_substr("tst1337",3 , 4);
	printf("%s", ptr);
}
