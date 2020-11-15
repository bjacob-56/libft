#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
    int     l2;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    str = malloc(sizeof(char) * (l1 + l2 + 1));
    if (!str)
    return (NULL);
	while (i < l1)
	{
		str[i] = s1[i];
        i++;
    }
	while (j < l2)
	{
        str[i + j] = s2[j];
        j++;
	}
	str[i + j] = '\0';
    return (str);
}