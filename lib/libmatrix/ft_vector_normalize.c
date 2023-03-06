/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_normalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:04:28 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:04:42 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_normalize(t_vector *vec, t_vector *res)
{
	int			i;
	double		mag;

	if (!vec || !res || vec->size != res->size)
	{
		ft_puterror("Invalid input in ft_vector_normalize.\n");
		return (0);
	}
	i = 0;
	mag = ft_vector_mag(vec);
	while (i < vec->size)
	{
		res->v[i] = vec->v[i] / mag;
		i++;
	}
	return (1);
}
