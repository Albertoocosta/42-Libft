
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst= new;
	}
}
