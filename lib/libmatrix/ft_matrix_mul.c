/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:30:47 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:31:40 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_mul(const t_matrix *m1, const t_matrix *m2, t_matrix *res)
{
	int		r;
	int		c;
	int		i;

	if (!(m1->cols == m2->rows || m1->rows == m2->cols)
		|| !(res->rows == m1->rows && res->cols == m2->cols))
	{
		ft_puterror("Invalid input in ft_matrix_mul.\n");
		return (0);
	}
	r = 0;
	while (r < m1->rows)
	{
		c = 0;
		while (c < m2->cols)
		{
			res->m[r][c] = 0;
			i = -1;
			while (++i < m1->cols)
				res->m[r][c] += m1->m[r][i] * m2->m[i][c];
			c++;
		}
		r++;
	}
	return (1);
}
