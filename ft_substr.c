/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 09:38:56 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/15 09:00:52 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start + len > s_len)
	{
		sub_len = s_len - start;
	}
	else
	{
		sub_len = len;
	}
	substr = (char *) malloc(sub_len + 1);
	if (!substr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(substr, (char *) s + start, sub_len);
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "lorem ipsum dolor sit amet";
	char	*str2;

	str2 = ft_substr(str1, 0, 10);
	printf("str1  = %s\n", str1);
	printf("str2  = %s\n", str2);
	printf("&str1  = %p\n", str1);
	printf("&str2  = %p\n", str2);
	return (0);
}*/
