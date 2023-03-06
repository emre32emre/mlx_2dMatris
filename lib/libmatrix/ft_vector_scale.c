/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_scale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:27:53 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:28:21 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_scale(t_vector *vec, t_vector *scale)
{
	int	i;

	if (!vec || !scale || vec->size != scale->size)
	{
		ft_puterror("Invalid input in ft_vector_scale\n.");
		return (0);
	}
	i = 0;
	while (i < vec->size)
	{
		vec->v[i] *= scale->v[i];
		i++;
	}
	return (1);
}
