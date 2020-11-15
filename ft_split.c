#include "libft.h"

int		get_nb_words(const char *str, char c)
{
	int		i;
	int		nb_w;

	i = 1;
	nb_w = 0;
	if (!str[0])
		return (0);
	while (str[i])
	{
		if (str[i] == c)
		{
			if (str[i - 1] != c)
				nb_w++;
		}
		i++;
	}
	if (str[i - 1] != c)
		nb_w++;
	return (nb_w);
}

char	*ft_malloc_ptr(int i, int *j, const char *str, char c)
{
	char	*ptr;

	*j = 0;
	while ((str[i + *j] != c) && str[i + *j])
		(*j)++;
	ptr = malloc(sizeof(char) * (*j + 1));
	*j = 0;
	while (str[i + *j] && (str[i + *j] != c))
	{
		ptr[(*j)] = str[i + *j];
		(*j)++;
	}
	ptr[(*j)] = '\0';
	return (ptr);
}

void	sep_str_in_tab(const char *str, char c, char ***str_tab, int *j)
{
	int		i;
	char	*ptr;
	int		new_w;
	int		i_words;

	new_w = 1;
	i = 0;
	i_words = 0;
	while (str[i])
	{
		if ((str[i] != c) && new_w)
		{
			ptr = ft_malloc_ptr(i, j, str, c);
			new_w = 0;
			i = i + *j;
			(*str_tab)[i_words++] = ptr;
		}
		else if (str[i++] == c)
			new_w = 1;
	}
}

char    **ft_split(char const *s, char c)
{
	char	**str_tab;
	int		nb_w;
	int		*j;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	j = &i;
	str_tab = 0;
	nb_w = get_nb_words(s, c);
	if (nb_w == 0)
	{
		str_tab = malloc(sizeof(char*));
		if (!str_tab)
			return (NULL);
		str_tab[0] = 0;
		return (str_tab);
	}
	str_tab = malloc(sizeof(char*) * (nb_w + 1));
	if (!str_tab)
		return (NULL);
	sep_str_in_tab(s, c, &str_tab, j);
	str_tab[nb_w] = 0;
	return (str_tab);
}
