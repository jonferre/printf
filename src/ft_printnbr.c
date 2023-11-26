/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <jonferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:47:11 by jonferre          #+#    #+#             */
/*   Updated: 2023/11/26 20:36:35 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printnbr(int nb)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = ft_itoa(nb);
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
