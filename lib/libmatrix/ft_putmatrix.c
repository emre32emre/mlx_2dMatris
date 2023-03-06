/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:46:30 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 15:48:49 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_putmatrix(t_matrix *mat)
{
	int	col;
	int	row;

	row = 0;
	if (mat == NULL)
		return ;
	printf("Matrix, cols: %d, rows :%d\n", (int)(mat->cols), (int)(mat->rows));
	while (row < mat->rows)
	{
		col = 0;
		while (col < mat->cols)
		{
			printf("%2f", mat->m[row][col]);
			if (col < mat->cols - 1)
				printf(" ");
			col++;
		}
		printf("\n");
		row++;
	}
}
