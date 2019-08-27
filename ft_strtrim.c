/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:28:40 by juligonz          #+#    #+#             */
/*   Updated: 2019/08/26 14:52:16 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank_nl(const char c)
{
	return (ft_isblank(c) || c == '\n');
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*res;

	start = 0;
	while(s[start] && ft_isblank_nl(s[start]))
		start++;
	if (!s[start])
		return (ft_strcpy(ft_strnew(0), ""));
	len = start - 1;
	while (s[++len])
		end = !ft_isblank_nl(s[len]) ? len : end;
	if (!(res = ft_strnew(end - start + 1)))
		return (NULL);
	len = 0;
	while (start <= end)
		res[len++] = s[start++];
	res[len] = '\0';
	return (res);
}
