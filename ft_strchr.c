/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:24:13 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/06 16:56:11 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	if (!c)
	{
		return (str);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	str1[10] = "abcdefghij";
	char	*c;	
	char	*d;	

	write(1, str1, 10);
	write(1, "\n", 1);
	c = ft_strchr(str1, 'k');
	printf("return = %s\n", c);
	d = strchr(str1, 'k');
	printf("return = %s\n", d);
	return (0);
}*/
