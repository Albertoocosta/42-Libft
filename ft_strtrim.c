
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	i;
	
	if (set == 0 || s1 == 0)
		return (0);
	i = 0;
	while (s1[i] != 0 && ft_strchr(set, s1[i]))
		i++;
	i = ft_strlen((char *)s1);
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
