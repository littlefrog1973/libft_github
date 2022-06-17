/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:59:58 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/10 09:35:45 by sdeeyien         ###   ########.fr       */
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
		return (0);
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
