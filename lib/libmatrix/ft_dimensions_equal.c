/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimensions_equal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:27:36 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 00:27:53 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_dimensions_equal(const t_matrix *m1, const t_matrix *m2)
{
	return ((m1->cols == m2->cols && m1->rows == m2->rows));
}
