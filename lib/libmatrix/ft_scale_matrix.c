/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:24:04 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:25:29 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_scale_matrix(int cols, int rows, t_vector *scale,
			t_matrix *res)
{
	int		r;
	int		c;

	if (cols != rows || scale->size != rows)
	{
		ft_puterror("Invalid input in ft_matrix_scale.\n");
		return (0);
	}
	r = 0;
	while (r < rows)
	{
		c = 0;
		while (c < cols)
		{
			res->m[r][c] = scale->v[r];
			r++;
			c++;
		}
		r++;
	}
	return (1);
}

t_matrix	*ft_scale_matrix_xyz(double x, double y, double z)
{
	t_matrix	*scale;

	scale = ft_matrix_id(4, 4);
	if (scale == NULL)
		return (NULL);
	scale->m[0][0] = x;
	scale->m[1][1] = y;
	scale->m[2][2] = z;
	return (scale);
}
