/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_extention.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:47:23 by juligonz          #+#    #+#             */
/*   Updated: 2020/01/27 17:53:50 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_valid_extention(char *filename, char *extention)
{
	char	*file_ext;

	file_ext = ft_strrchr(filename, '.');
	if (ft_strcmp(file_ext, extention) == 0)
		return (1);
	return (0);
}
