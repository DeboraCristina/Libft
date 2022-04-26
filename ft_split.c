#include "libft.h"

static int	ft_cdel(const char *str, char del)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == del)
			c++;
		i++;
	}
	return (c);
}

static int	*ft_strnlen(const char *str, char del, int n)
{
	int	start;
	int	end;
	int	*pos;

	pos = (int *) malloc(2 * sizeof(int));
	start = 0;
	end = 0;
	while (n)
	{
		while (str[start] && str[start] != del)
			start++;
		start++;
		end = start;
		n--;
	}
	while (str[end] && str[end] != del)
		end++;
	if (!str[end])
		end++;
	pos[0] = start;
	pos[1] = end;
	return (pos);
}

char	**ft_split(char const *s, char c)
{
	int		ndel;
	int		pos[2];
	char	**result;

	ndel = ft_cdel(s, c) + 1;
	result = (char **) malloc((ft_cdel(s, c)) * sizeof(char *));
	if (!result)
		return (0);
	result[ndel] = "\0";
	ndel--;
	while (ndel >= 0)
	{
		pos[0] = ft_strnlen(s, c, ndel)[0];
		pos[1] = ft_strnlen(s, c, ndel)[1];
		result[ndel] = (char *) malloc((pos[1] - pos[0] + 1) * sizeof(char));
		if (!result[ndel])
			return (0);
		result[ndel] = ft_substr(s, pos[0], pos[1] - pos[0]);
		--ndel;
	}
	return (result);
}
