/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_forward.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:12:41 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 16:12:44 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_forward(t_vector *position, t_vector *target, t_vector *res)
{
	t_vector	*forward_unnormalized;

	forward_unnormalized = ft_vector_new(position->size);
	if (position->size != target->size || position->size != res->size
		|| (forward_unnormalized == NULL)
		|| ft_vector_sub(target, position, forward_unnormalized) == FALSE
		|| ft_vector_normalize(forward_unnormalized, res) == FALSE)
	{
		ft_puterror("Invalid input in ft_vector_forward.\n");
		return (0);
	}
	ft_vector_free(forward_unnormalized);
	return (1);
}
