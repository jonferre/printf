/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:47:41 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 11:47:42 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	nbrlen_base(unsigned long long nbr, int base)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr /= base;
	}
	return (len);
}

char	*ft_utoa_base(unsigned long long nbr, int base, char *hex)
{
	char		*str;
	size_t		len;

	len = nbrlen_base(nbr, base);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = hex[nbr % base];
		nbr /= base;
	}
	return (str);
}
