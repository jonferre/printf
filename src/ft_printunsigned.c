/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:46:52 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 20:36:01 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printunsigned(unsigned int nb)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = ft_utoa_base(nb, 10, "0123456789");
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
