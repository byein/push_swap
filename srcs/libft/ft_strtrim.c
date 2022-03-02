/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:40 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:33:00 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	end;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	end = ft_strlen(s1);
	while (end != 0 && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr((char *)s1, 0, end + 1);
	if (!str)
		return (NULL);
	return (str);
}
