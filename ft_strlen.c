/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:09:14 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/09 16:09:38 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{	char 	str[] = "abc";

	printf("ft_strlen = %lu\n", ft_strlen(str));
	printf("strlen = %lu\n", strlen(str));
}*/
=======
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 06:17:00 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/07/10 06:21:45 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str)
		i++;
	return (i);
}
>>>>>>> 9230ec05f90a320eec199b5ebf8ff5f9479f44ef
