/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 01:48:48 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:48:57 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_matrix_free(t_matrix *mat)
{
	if (!mat)
	{
		ft_puterror("Invalid input in ft_matrix_free\n.");
		return ;
	}
	free(mat->m);
	free(mat);
	mat = NULL;
}
