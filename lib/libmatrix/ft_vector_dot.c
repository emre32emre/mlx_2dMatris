/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:09:35 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:10:09 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

double	ft_vector_dot(t_vector *v1, t_vector *v2)
{
	int			i;
	double		res;

	if (!v1 || !v2 || !(v1->size == v2->size))
	{
		ft_puterror("Invalid input in ft_vector_dot.\n");
		return (0);
	}
	i = 0;
	res = 0;
	while (i < v1->size)
	{
		res += v1->v[i] * v2->v[i];
		i++;
	}
	return (res);
}
