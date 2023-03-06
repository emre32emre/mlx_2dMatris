/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_set_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:51:12 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 15:52:33 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_set_all(t_matrix *mat, double nb)
{
	int	i;
	int	j;

	i = 0;
	while (i < mat->rows)
	{
		j = 0;
		while (j < mat->cols)
		{
			mat->m[i][j] = nb;
			j++;
		}
		i++;
	}
	return (1);
}
