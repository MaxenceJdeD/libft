/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:05:13 by mjacques          #+#    #+#             */
/*   Updated: 2018/12/12 21:05:26 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ptrdel(char **ptr)
{
	size_t	i;

	if (ptr)
	{
		i = -1;
		while (ptr[++i])
			ft_strdel(&ptr[i]);
		free(ptr);
	}
}
