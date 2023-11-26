/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:44:46 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 11:44:58 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_handle(const char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (c == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_printptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_printunsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_printhex((va_arg(args, unsigned int)), "0123456789abcdef");
	else if (c == 'X')
		len += ft_printhex((va_arg(args, unsigned int)), "0123456789ABCDEF");
	else if (c == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += type_handle((str[i + 1]), args);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
