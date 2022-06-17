/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 05:52:16 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/11 12:30:39 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	source = (unsigned char *) src;
	destination = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	b[10] = {1,1,1,1,1,1,1,1,1,1};
	unsigned char	d[10] = {1,1,1,1,1,1,1,1,1,1};
	unsigned char	c[10] = {5,5,5,5,5,5,5,5,5,5};
	size_t	i;

	ft_memcpy(b, c, 5);
	memcpy(d, c, 5);
	for (i = 0; i < 10; i++)
	{
		printf("b[%lu] = %d\n", i, b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("d[%lu] = %d\n", i, d[i]);
	}
}*/
