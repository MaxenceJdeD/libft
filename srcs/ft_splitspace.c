/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:04:50 by mjacques          #+#    #+#             */
/*   Updated: 2018/12/12 21:05:41 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordnbr(char *str)
{
	size_t	i;
	size_t	size;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (i == 0 && !ft_isspace(str[i]))
			++size;
		else if (!ft_isspace(str[i]) && ft_isspace(str[i - 1]))
			++size;
		++i;
	}
	return (size);
}

static size_t	ft_wordlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		++i;
	return (i);
}

char			**ft_splitspace(char *str)
{
	size_t	i;
	size_t	len;
	size_t	size;
	char	**tab;

	size = ft_wordnbr(str);
	if (!(tab = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_isspace(*str))
			++str;
		len = ft_wordlen(str);
		tab[i] = ft_strsub(str, 0, len);
		str += len;
	}
	tab[i] = 0;
	return (tab);
}
