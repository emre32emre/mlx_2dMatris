/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector4_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:00:43 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:01:51 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

t_vector	*ft_vector4_new(double x, double y, double z)
{
	t_vector	*new;

	new = ft_vector_new(4);
	if (new == NULL)
		return (NULL);
	new->v[0] = x;
	new->v[1] = y;
	new->v[2] = z;
	new->v[3] = 1;
	return (new);
}
