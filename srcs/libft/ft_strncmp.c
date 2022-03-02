/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:30 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:54 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	while (*s1_cmp && *s2_cmp && *s1_cmp == *s2_cmp && n > 0)
	{
		n--;
		s1_cmp++;
		s2_cmp++;
	}
	if (n == 0)
		return (0);
	return (*s1_cmp - *s2_cmp);
}
