/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:49:34 by mjacques          #+#    #+#             */
/*   Updated: 2018/08/12 19:10:28 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = (char *)ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
