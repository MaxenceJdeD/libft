#include "libft.h"

static double	decimal_handle(char *str, char **endptr)
{
	double	decim;
	double	nbr;

	nbr = 0;
	decim = 0.1;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr + (*str - 48) * decim;
		decim = decim / 10;
		str += 1;
	}
	*endptr = str;
	return (nbr);
}

double			ft_strtod(char *str, char **endptr)
{
	int		sign;
	double	nbr;

	while (*str && (ISSPACE(*str) || ISSPACE2(*str)))
		str += 1;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str += 1;
	nbr = 0;
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + *str - 48;
		str += 1;
	}
	if (*str == '.')
	{
		str += 1;
		nbr = nbr + decimal_handle(str, endptr);
	}
	else
		*endptr = str;
	return ((double)nbr * sign);
}
