/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:33 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:57 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;

	if (!*little)
		return ((char *)big);
	index = 0;
	while (big[index] && len)
	{
		if (ft_strncmp(big + index, little, ft_strlen(little)) == 0
			&& len >= ft_strlen(little))
			return ((char *)(big + index));
		index++;
		len--;
	}
	return (NULL);
}
