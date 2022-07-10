/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:59:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/07/07 10:53:28 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
	{
		errno = ENOMEM;
		return ((void *) NULL);
	}
	ft_bzero(str, count * size);
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	int	i;

	str1 = (char *) ft_calloc(500000, 1);
	str2 = (char *) calloc(500000, 1);
	i = 0;
	while (i < 10)
	{
		write(1, str1,1);
		i++;
		str1++;
	}
	write(1, "\n", 1);
	while (i > 0)
	{
		write(1, str2,1);
		i--;
		str2++;
	}
	return (0);
}*/
