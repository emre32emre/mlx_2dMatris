/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:35:45 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 16:37:56 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_putvector(t_vector *vec)
{
	t_matrix	*m;

	m = ft_matrix_new(1, vec->size);
	if (m == NULL || ft_vector_to_matrix(vec, m) == FALSE)
	{
		ft_puterror("Failed to print vector in ft_putvector.\n");
		return ;
	}
	ft_putmatrix(m);
	ft_matrix_free(m);
}
