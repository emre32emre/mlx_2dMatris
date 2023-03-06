/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:50:09 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:50:13 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_vector_free(t_vector *vec)
{
	if (!vec)
	{
		ft_puterror("Invalid input in ft_vector_free\n.");
		return ;
	}
	free(vec->v);
	free(vec);
	vec = NULL;
}
