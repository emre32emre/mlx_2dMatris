/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_scale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:39:17 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:39:19 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_matrix_scale(t_matrix *mat, t_matrix *scale, t_matrix *res)
{
	if (!mat || !scale || !ft_dimensions_equal(mat, scale))
	{
		ft_puterror("Invalid input in ft_matrix_scale.\n");
		return (0);
	}
	return (ft_matrix_mul(mat, scale, res));
}
