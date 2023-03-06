/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_cross.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:10:59 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:11:38 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

/*
** x = Ay * Bz - By * Az = 0
** y = Az * Bx - Bz * Ax = 0
** z = Ax * By - Bx * Ay = -1
*/

int	ft_vector_cross(t_vector *v1, t_vector *v2, t_vector *res)
{
	if (!v1 || !v2
		|| !(v1->size == v2->size && v1->size == res->size))
	{
		ft_puterror("Invalid input in ft_vector_cross.\n");
		return (0);
	}
	res->v[0] = v1->v[1] * v2->v[2] - v2->v[1] * v1->v[2];
	res->v[1] = v1->v[2] * v2->v[0] - v2->v[2] * v1->v[0];
	res->v[2] = v1->v[0] * v2->v[1] - v2->v[0] * v1->v[1];
	return (1);
}
