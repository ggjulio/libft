/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 05:56:15 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/07 05:56:15 by jugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = -1;
	while (s1[++i]  && s1[i] == s2[i] && i < n - 1);
	return n == 0 ? 0 : ((unsigned char)s1[i] - (unsigned char)s2[i]);
}