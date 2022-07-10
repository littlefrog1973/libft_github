/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:58:59 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/23 12:00:10 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_to_cmp;

	if (!*needle)
	{
		return ((char *) haystack);
	}
	len_to_cmp = ft_strlen(needle);
	if (!haystack)
		ft_memset(NULL, 1, 100);
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
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "abcdefghij";
	char *str2 = NULL;

//	printf("%s\n", strnstr(str1, str2, 3));
	printf("%s\n", ft_strnstr(str2, str1,3));
	return (0);
}*/
