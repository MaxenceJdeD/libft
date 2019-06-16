/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:40:47 by mjacques          #+#    #+#             */
/*   Updated: 2019/06/15 22:43:15 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	char	*dst;
	size_t	i;

	if ((dst = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		++i;
	}
	return (dst);
}
