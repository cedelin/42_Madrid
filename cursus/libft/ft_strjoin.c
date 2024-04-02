#include "libft.h"

char *ft_strjoin(char const *str1, char const *str2)
{
	char	*result;
	size_t	n;
	size_t	i;

	result = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}
	n = 0;
	while (str2[n] != '\0')
	{
		result[i + n] = str2[n];
		n++;
	}
	result[i + n] = '\0';
	return (result);
}