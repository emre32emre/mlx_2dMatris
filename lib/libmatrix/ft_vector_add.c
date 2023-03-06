/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:08:11 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:08:35 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_add(t_vector *v1, t_vector *v2, t_vector *res)
{
	int		i;

	if (!v1 || !v2
		|| !(v1->size == v2->size && v1->size == res->size))
	{
		ft_puterror("Invalid input in ft_vector_add.\n");
		return (0);
	}
	i = 0;
	while (i < v1->size)
	{
		res->v[i] = v1->v[i] + v2->v[i];
		i++;
	}
	return (1);
}
