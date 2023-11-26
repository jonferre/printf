/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:46:40 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 20:35:06 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printptr(void *ptr)
{
	int					len;
	unsigned long long	address;
	char				*str;

	len = 0;
	address = (unsigned long long)ptr;
	if (!address)
	{
		len = ft_printstr("(nil)");
		return (len);
	}
	str = ft_utoa_base(address, 16, "0123456789abcdef");
	len += ft_printstr("0x");
	len += ft_printstr(str);
	free(str);
	return (len);
}
