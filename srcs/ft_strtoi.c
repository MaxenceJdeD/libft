/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:31:06 by mjacques          #+#    #+#             */
/*   Updated: 2019/04/02 15:32:01 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strtoi(char *str, char **endptr)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	while (str[i] && (ISSPACE(str[i]) || ISSPACE2(str[i])))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	nbr = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + str[i] - 48;
		if ((nbr * sign) > INT_MAX || (nbr * sign) < INT_MIN)
			break ;
		i++;
	}
	*endptr = &str[i];
	return ((int)nbr * sign);
}
