/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:46:27 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 11:46:30 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printhex(unsigned int nbr, char *hex)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = ft_utoa_base(nbr, 16, hex);
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
