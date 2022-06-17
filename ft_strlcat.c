/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 06:32:22 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/13 17:25:51 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	j;
	size_t	size_src;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen((char *) src);
	j = 0;
	while (src[j] && j + 1 + size_dst < dstsize)
	{
		if ((dstsize - size_dst >= 1) && (j + 1 + size_dst < dstsize))
		{
			*(dst + size_dst + j) = *(src + j);
		}
		j++;
	}
	dst[size_dst + j] = '\0';
	if (dstsize >= size_dst)
	{
		return (size_dst + size_src);
	}
	else
	{
		return (dstsize + size_src);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	str1[15] = "rrrrrr\0\0\0\0\0\0\0\0a";
	char	str3[15] = "rrrrrr\0\0\0\0\0\0\0\0a";
	unsigned int	i;

	i = strlcat(str1, "lorem ipsum dolor sit amet", 15);
	printf("return = %u\n", i);
	write(1, str1, 15);
	write(1, "\n", 1);	
	i = ft_strlcat(str3, "lorem ipsum dolor sit amet", 15);
	printf("return = %u\n", i);
	write(1, str3, 15);
	write(1, "\n", 1);
	return (0);
}*/