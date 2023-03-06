/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:34:41 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 00:36:56 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_add(const t_matrix *m1, const t_matrix *m2, t_matrix *res)
{
	int			r;
	int			c;

	if (!m1 || !m2 || !res || !ft_dimensions_equal(m1, m2)
		|| !ft_dimensions_equal(m1, res))
	{
		ft_puterror("Invalid input in ft_matrix_add.\n");
		return (0);
	}
	r = 0;
	while (r < m1->rows)
	{
		c = 0;
		while (c < m1->cols)
		{
			res->m[r][c] = m1->m[r][c] + m2->m[r][c];
			c++;
		}
		r++;
	}
	return (1);
}
