#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!(ptr = malloc(sizeof(*src) * (src_len + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
