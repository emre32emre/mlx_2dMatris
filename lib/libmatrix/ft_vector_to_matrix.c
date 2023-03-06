/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_to_matrix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:14:24 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:14:40 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_to_matrix(const t_vector *vec, t_matrix *res)
{
	if (vec->size != res->rows || res->cols != 1)
	{
		ft_puterror("Invalid input in ft_vector_to_matrix.\n");
		return (0);
	}
	ft_matrix_set_vals(res, vec->v, vec->size);
	return (1);
}
