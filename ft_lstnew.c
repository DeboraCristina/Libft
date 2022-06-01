#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	nl;
	nl->content = malloc(ft_strlen(content));
	if (nl->content)
		return (NULL);
	nl->next = NULL;
	return (nl);
}
