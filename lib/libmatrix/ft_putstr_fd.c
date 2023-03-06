/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:04:21 by mkocabas          #+#    #+#             */
/*   Updated: 2023/02/28 16:04:23 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrix.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	write(fd, str, len);
}
