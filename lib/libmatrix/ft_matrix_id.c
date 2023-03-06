/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:23:45 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 01:40:29 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

t_matrix	*ft_matrix_id(int cols, int rows)
{
	t_matrix	*m;
	int			r;
	int			c;

	m = ft_matrix_new(cols, rows);
	if (cols != rows || (m == NULL))
	{
		ft_puterror("Invalid input in ft_matrix_id\n.");
		return (NULL);
	}
	r = 0;
	while (r < rows)
	{
		c = 0;
		while (c < cols)
		{
			m->m[r][c] = 1;
			r++;
			c++;
		}
		r++;
	}
	return (m);
}
