/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:36 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:59 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	while (index >= 0)
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
