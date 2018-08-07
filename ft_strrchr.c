/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 05:30:12 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/07 05:30:12 by jugonzal         ###   ########.fr       */
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
