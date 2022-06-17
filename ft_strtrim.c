/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:23:42 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/16 06:05:56 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	begin;
	size_t	end;

	begin = 0;
	while (ft_strchr(set, s1[begin]))
	{	
		begin++;
	}
	end = ft_strlen(s1)-1;
	while (ft_strrchr(set, s1[end]) && end != 0)
	{
		end--;
	}
	if (end > begin)
	{
		str_trim = ft_calloc(end - begin + 2, 1);
	}
	else
	{	
		exit (0);
	}
	ft_memcpy(str_trim, s1 + begin, end - begin + 1);
	return (str_trim);
}
/*
#include <stdio.h>

int	main(void)
{
//	char	s1[] = "lorel ipsum dolor sit amet \n \t";
	char	s1[] = "                                ";
	char	s2[] = "\t \n";
	char	*s3;

	s3 = ft_strtrim(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s3);
	return (0);
}*/
