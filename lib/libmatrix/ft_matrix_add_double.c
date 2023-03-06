/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_add_double.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:18:36 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 16:18:59 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_add_double(const t_matrix *m1, const double d, t_matrix *res)
{
	int		r;
	int		c;

	if (!m1 || !res)
	{
		ft_puterror("Invalid input in ft_matrix_add_double.\n");
		return (0);
	}
	r = 0;
	while (r < m1->rows)
	{
		c = 0;
		while (c < m1->cols)
		{
			res->m[r][c] = m1->m[r][c] + d;
			c++;
		}
		r++;
	}
	return (1);
}
