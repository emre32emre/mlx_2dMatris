/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_vals.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:45:08 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:46:09 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_set_vals(t_matrix *mat, double *arr, int arr_size)
{
	int	r;
	int	c;
	int	len;

	len = mat->cols * mat->rows;
	if (arr_size != len || !mat || !arr)
	{
		ft_puterror("Invalid input in ft_matrix_set_vals.\n");
		return (0);
	}
	r = 0;
	while (r < mat->rows)
	{
		c = 0;
		while (c < mat->cols)
		{
			mat->m[r][c] = arr[c * (mat)->rows + r];
			c++;
		}
		r++;
	}
	return (1);
}
