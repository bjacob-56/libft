
#include "libft.h"

int	ft_strlen(const char *str)
{
	int nb;

	nb = 0;
	while (*(str + nb) != '\0')
	{
		nb = nb + 1;
	}
	return (nb);
}