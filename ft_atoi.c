/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:46:02 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/16 23:44:55 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	base;

	i = 0;
	sign = 1;
	base = 0;
	while (ft_strchr(" \t\n\v\f\r", str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = base * 10 + str[i] - '0';
		i++;
	}
	return (base * sign);
}

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "-9223372036854775811";

	printf("int of str (atoi) = %d\n", atoi(str));
	printf("int of str (ft_atoi) = %d\n", ft_atoi(str));
	return (0);
}
