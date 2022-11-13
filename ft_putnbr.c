/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:39:53 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/13 04:45:16 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nb, int *count)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar((nb + 48), count);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else if (nb < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(nb * (-1), count);
	}
}
