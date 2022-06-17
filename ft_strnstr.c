/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:58:59 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/08 05:49:50 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_to_cmp;

	if (!*needle)
	{
		return ((char *) haystack);
	}
	len_to_cmp = ft_strlen(needle);
	while (haystack && len > 0)
	{
		if (len < len_to_cmp)
		{
			return (0);
		}		
		if (!ft_strncmp(haystack, needle, len_to_cmp))
		{
			return ((char *) haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char str1[] = "abcdefghij";
	char str2[] = "";

	printf("%s\n", strnstr(str1, str2, 0));
	printf("%s\n", ft_strnstr(str1, str2,0));
	return (0);
}*/
