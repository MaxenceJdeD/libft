/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:51:21 by mjacques          #+#    #+#             */
/*   Updated: 2019/06/15 22:38:32 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char *str, char c)
{
	int		len;
	char	*newstr;

	len = ft_strlen(str);
	if ((newstr = ft_strnew(len + 1)) == NULL)
		return (NULL);
	ft_strcpy(newstr, str);
	newstr[len] = c;
	return (newstr);
}
