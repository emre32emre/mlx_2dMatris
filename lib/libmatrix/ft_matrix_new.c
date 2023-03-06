/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:21:16 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 15:44:35 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

static void	ft_matrix_initialize(t_matrix *mat, int cols, int rows)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		mat->m[i] = (double *)malloc(cols * sizeof(double));
		if (mat->m[i] == NULL)
			return ;
		j = 0;
		while (j < cols)
		{
			mat->m[i][j] = 0;
			j++;
		}
		i++;
	}
}

t_matrix	*ft_matrix_new(int cols, int rows)
{
	t_matrix	*mat;

	mat = (t_matrix *)malloc(sizeof(*mat));
	if (mat == NULL)
		return (NULL);
	mat->cols = cols;
	mat->rows = rows;
	mat->m = (double **)malloc(rows * sizeof(double *));
	if (mat->m == NULL)
		return (NULL);
	ft_matrix_initialize(mat, cols, rows);
	return (mat);
}
