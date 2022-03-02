/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:09 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:45 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*ptr;

	size = ft_strlen(s) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, size);
	return (ptr);
}
