/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_mul_vector.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:20:29 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:20:55 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_mul_vector(const t_matrix *m1, const t_vector *v,
		t_vector *res)
{
	int		r;
	int		c;

	if (m1->cols != v->size || v->size != res->size)
	{
		ft_puterror("Invalid input in ft_matrix_mul_vector\n");
		return (0);
	}
	r = 0;
	while (r < m1->rows)
	{
		c = 0;
		while (c < m1->cols)
		{
			res->v[r] += m1->m[r][c] * v->v[c];
			c++;
		}
		r++;
	}
	return (1);
}
