/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:40:28 by dojeanno          #+#    #+#             */
/*   Updated: 2023/02/14 18:08:52 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = (int)ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}