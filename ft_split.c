#include "libft.h"

#define DEBUG 1

#if DEBUG == 1
#include <stdio.h>
#endif

static int	ft_cword(const char *str, char del)
{
	int	c;
	int	i;
	int	status;

	c = 0;
	i = 0;
	status = 0;
	while (str[i])
	{
		if (status == 0 && str[i] != del)
		{
			c++;
			status = 1;
		}
		else if (str[i] == del)
			status = 0;
		i++;
	}
	return (c);
}

static void	ft_strnlen(const char *str, int start, char del, int *pos)
{
	int	end;

	end = 0;
	while (str[start] && str[start] == del) // começo da primeira palavra
		start++;
	printf("%c\n", str[start]);
	end = start;
	while (str[end])
	{
		if (str[end + 1] == 0 || str[end + 1] == del)
			break ;
		end++;
	}
	pos[0] = start;
	pos[1] = end;
}

char	**ft_split(char const *s, char c)
{
	int		ndel;
	int		pos[2];
	int		i;
	char	**result;

	ndel = ft_cword(s, c);
	pos[0] = 0;
	pos[1] = -1;
	i = 0;
	printf("%d\n", ndel);
	result = (char **) malloc((ndel + 1) * sizeof(char *));
	if (!result)
		return (0);
	result[ndel] = 0; // rs[2]
	while (i < ndel)
	{
		ft_strnlen(s, pos[1] + 1, c, pos);
		printf("p0 = %d | p1 = %d\n", pos[0], pos[1]);
		result[i] = ft_substr(s, pos[0], pos[1] - pos[0] + 1);
		i++;
	}
	return (result);
}
