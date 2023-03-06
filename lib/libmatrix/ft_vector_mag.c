/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_mag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:03:11 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:03:39 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

double	ft_vector_mag(t_vector *vec)
{
	int			i;
	double		res;

	i = 0;
	res = 0;
	while (i < vec->size)
	{
		res += vec->v[i] * vec->v[i];
		i++;
	}
	return (sqrt(res));
}
