/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:36:52 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/06 16:53:55 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*tmp;

	str = (char *) s;
	tmp = 0;
	while (*str)
	{
		if (*str == c)
		{
			tmp = str;
		}
		str++;
	}
	if (!c)
	{
		return (str);
	}
	else
	{
		return (tmp);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	str1[10] = "abcdefghbj";
	char	*c;	
	char	*d;	

	write(1, str1, 10);
	write(1, "\n", 1);
	c = ft_strrchr(str1, 'k');
	printf("return = %s\n", c);
	d = strrchr(str1, 'k');
	printf("return = %s\n", d);
	return (0);
}*/
