/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:30:15 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:30:36 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_set_all(t_vector *vec, double d)
{
	int	i;

	if (!vec)
	{
		ft_puterror("Invalid input in ft_vector_set_all.\n");
		return (0);
	}
	i = 0;
	while (i < vec->size)
		vec->v[i++] = d;
	return (1);
}
