/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:07 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 16:09:37 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_putint_fd(int nb, int fd)
{
	int	digits[10];
	int	index;
	int	sign;

	index = 0;
	if (nb >= 0)
		sign = 1;
	else
		sign = 0;
	if (nb == FALSE)
		ft_putchar_fd('0', fd);
	while (nb != 0)
	{
		digits[index] = nb % 10;
		nb = nb / 10;
		index++;
	}
	index++;
	if (sign < 0)
		ft_putchar_fd('-', fd);
	while (--index > 0)
		ft_putchar_fd(sign * digits[index - 1] + '0', fd);
}
