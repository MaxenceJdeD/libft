/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:40:47 by mjacques          #+#    #+#             */
/*   Updated: 2018/07/26 14:37:26 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(const char *src, size_t len)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	if (len != 1)
	{
		while (src[++i] && i < len)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	else
		dst[0] = '\0';
	return (dst);
}
