#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	if (!s || !(str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}