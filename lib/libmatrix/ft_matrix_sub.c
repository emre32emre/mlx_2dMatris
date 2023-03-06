/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:26:56 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:27:53 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_sub(const t_matrix *m1, const t_matrix *m2, t_matrix *res)
{
	int	r;
	int	c;

	if (!m1 || !m2 || !res || !ft_dimensions_equal(m1, m2)
		|| !ft_dimensions_equal(m1, res))
	{
		ft_puterror("Invalid input in ft_matrix_sub.\n");
		return (0);
	}
	r = 0;
	while (r < m1->rows)
	{
		c = 0;
		while (c < m1->cols)
		{
			res->m[r][c] = m1->m[r][c] - m2->m[r][c];
			c++;
		}
		r++;
	}
	return (1);
}
