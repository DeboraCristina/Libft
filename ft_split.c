#include "libft.h"

#define DEBUG 1

#if DEBUG == 1
#include <stdio.h>
#endif

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
#if DEBUG == 0
	int		pos[2];
#endif
#if DEBUG == 1
	int		*pos;
#endif
	int		size;
	char	**result;

	ndel = ft_cdel(s, c) + 1;
	result = (char **) malloc(ndel * sizeof(char *));
	printf("AKI\n");
	if (!result)
		return (0);
	result[ndel] = "\0";
	ndel--;
	while (ndel >= 0)
	{
#if DEBUG == 1
		pos = ft_strnlen(s, c, ndel);
#endif
#if DEBUG == 0
		pos[0] = ft_strnlen(s, c, ndel)[0];
		pos[1] = ft_strnlen(s, c, ndel)[1];
#endif
		printf("p0 = %d | p1 = %d\n", pos[0], pos[1]);
		size = pos[1] - pos[0] + 1;
		result[ndel] = (char *) malloc(size * sizeof(char));
		if (!result[ndel])
			return (0);
		result[ndel] = ft_substr(s, pos[0], pos[1] - pos[0]);
		--ndel;
	}
#if DEBUG == 1
	free(pos);
#endif
	return (result);
}
