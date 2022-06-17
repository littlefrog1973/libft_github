/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 08:11:52 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/14 22:12:07 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	mp(unsigned char *dst, unsigned char *src, size_t i, size_t len)
{
	if (i == 0)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i != 0)
		{
			dst[i] = src[i];
			i--;
		}
		dst[0] = src[0];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (len > ft_strlen(dst) + 1)
	{
		return (0);
	}
	if (dest <= source)
	{
		mp(dest, source, 0, len);
	}
	else
	{
		mp(dest, source, len - 1, len);
	}	
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	b[17] = "0123456789ABCDEF";
	unsigned char	d[17] = "0123456789ABCDEF";
	unsigned char	*e;
	unsigned char	*f;

	e = d + 2;
	f = b + 2;
	ft_memmove(f, b, 8);
	memmove(e, d, 8);
	printf("%s\n", b);
	printf("%s\n", d);
	return (0);
}*/
