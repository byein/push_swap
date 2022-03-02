#include "../../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;
	size_t			index;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (*(s1_cmp + index) != *(s2_cmp + index))
			break ;
		index++;
	}
	if (index == n)
		return (0);
	return (*(s1_cmp + index) - *(s2_cmp + index));
}
