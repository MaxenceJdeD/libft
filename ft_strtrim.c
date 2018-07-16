/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:03:02 by mjacques          #+#    #+#             */
/*   Updated: 2018/07/15 16:20:02 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrimnul(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 1)))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (ISSPACE(s[i]) && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while (ISSPACE(s[j]) && j != 0)
		j--;
	if ((i == 0 && ft_strlen(s) == 0) || j == 0)
		return (ft_strtrimnul());
	if (!(str = (char *)malloc(sizeof(char) * (j - i) + 1)))
		return (NULL);
	k = 0;
	while (k <= (j - i))
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
