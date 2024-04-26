
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	
	last = (t_list *)malloc(sizeof(t_list));
	if (!last)
		return (0);
	while ((lst->next) != NULL)
		last->next = lst->next;
	return (last);
}
