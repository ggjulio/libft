/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:29:54 by juligonz          #+#    #+#             */
/*   Updated: 2020/08/26 01:46:53 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_vasprintf(char **ret, const char *format, va_list ap)
{
	size_t		i;
	char		*str;
	t_manager	p;

	str = (char *)format;
	ft_memset(&p, 0, sizeof(t_manager));
	p.caller = ASPRINTF;
	if (!(p.dst = ft_calloc(1, 1)))
		return (-1);
	i = -1;
	while (format[++i])
		if (format[i] == '%')
		{
			write_buffer(&p, str, format + i++ - str);
			i += read_flags(&p, ap, format + i);
			if (!p.specifier)
				break ;
			parse_printf_format(ap, &p);
			str = (char *)format + i + 1;
		}
	write_buffer(&p, str, format + i - str);
	flush_buffer(&p);
	*ret = p.dst;
	return (p.malloc_fail ? -1 : p.len);
}

int		ft_asprintf(char **ret, const char *format, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, format);
	len = ft_vasprintf(ret, format, ap);
	va_end(ap);
	return (len);
}
