/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:29:59 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:42 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		index;
	size_t		size;

	index = 0;
	size = ft_strlen(s);
	while (index < size)
	{
		if (s[index] == (char )c)
			return ((char *)(s + index));
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (NULL);
}
