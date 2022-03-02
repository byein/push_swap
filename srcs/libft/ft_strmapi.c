/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:27 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:53 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	index;
	char			*new_str;

	size = ft_strlen(s) + 1;
	index = 0;
	new_str = malloc(size);
	if (!new_str)
		return (NULL);
	new_str[size - 1] = '\0';
	while (s[index])
	{
		new_str[index] = (f)(index, s[index]);
		index++;
	}
	return (new_str);
}
