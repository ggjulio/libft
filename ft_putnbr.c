/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:17:36 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/02 17:43:03 by jugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_putnbr(int n)
{
  long l;

  l = (long)n;
  if (l < 0)
  {
    l = -l;
    ft_putchar('-');
  }
  if (l < 10)
    ft_putchar(l + '0');
  else if (l >= 10)
  {
    ft_putnbr(l / 10);
    ft_putnbr(l % 10);
  }
}
