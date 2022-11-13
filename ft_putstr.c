/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:30:13 by olahmami          #+#    #+#             */
/*   Updated: 2022/11/13 04:45:28 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	if (!str)
		ft_putstr("(null)", count);
	else
	{
		i = 0;
		while (str[i])
		{
			ft_putchar(str[i], count);
			i++;
		}
	}
}
