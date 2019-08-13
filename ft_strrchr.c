/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 00:10:33 by juligonz          #+#    #+#             */
/*   Updated: 2019/08/14 00:10:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int 	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	while (--i >= 0)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
