/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set_vals.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:30:50 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 12:30:58 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

int	ft_vector_set_vals(t_vector *vec, double *arr, int arr_size)
{
	int	i;

	if (arr_size != vec->size)
	{
		ft_puterror("Invalid input in ft_vector_set_vals.\n");
		return (0);
	}
	i = 0;
	while (i < vec->size)
	{
		vec->v[i] = arr[i];
		i++;
	}
	return (1);
}
