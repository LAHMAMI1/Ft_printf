/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:25:00 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/13 04:45:04 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nb, int *count, int Xx)
{
	if (nb < 16)
	{
		if (nb < 10)
			ft_putchar((nb + 48), count);
		else
			ft_putchar((nb + Xx), count);
	}
	else
	{
		ft_puthex(nb / 16, count, Xx);
		ft_puthex(nb % 16, count, Xx);
	}
}
