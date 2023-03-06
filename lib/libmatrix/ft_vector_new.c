/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:57:14 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 11:59:51 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

t_vector	*ft_vector_new(int size)
{
	t_vector	*vec;
	int			i;

	vec = (t_vector *)malloc(sizeof(*vec));
	if (vec == NULL)
		return (NULL);
	vec->size = size;
	vec->v = (double *)malloc(size * sizeof(double));
	if (vec->v == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		vec->v[i++] = 0;
	return (vec);
}
