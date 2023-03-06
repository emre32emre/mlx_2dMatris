/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_dup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:58:47 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 15:59:42 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

t_vector	*ft_vector_dup(t_vector *v)
{
	t_vector	*new;
	int			i;

	new = ft_vector_new(v->size);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < v->size)
	{
		new->v[i] = v->v[i];
		i++;
	}
	return (new);
}
