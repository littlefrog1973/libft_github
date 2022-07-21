/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:23:42 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/07/15 22:31:50 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	begin;
	size_t	end;

	if ((!(s1) || !(set)) || (!(*s1) && (*set)))
		return (ft_strdup(""));
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]))
		begin++;
	while (ft_strchr(set, s1[end]) && end != 0)
		end--;
	if (end >= begin && !ft_strchr(set, s1[begin]))
	{
		str_trim = (char *) malloc((end - begin + 2) * sizeof(char));
		if (!str_trim)
			return (NULL);
		ft_bzero(str_trim, (end - begin + 2) * sizeof(char));
		ft_memcpy(str_trim, s1 + begin, end - begin + 1);
	}
	else
		return (ft_strdup(""));
	return (str_trim);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
//	char	s1[] = "lorel ipsum dolor sit amet \n t";
//	char	s1[] = "  \t \t \n  \n\n\n\t";
	char	s1[] = "          ";
	char	s4[] = " ";
	char	s2[] = "";
	char	*s3;

//char *ret = ft_strtrim(s1, " ");

	s3 = ft_strtrim(s1, s4);
//	printf("%s\n", s1);
	printf("In main:%p\n", s3);
	printf("strcmp result = %d\n",strcmp(s3,s2));
	return (0);
}

int	main(void)
{
//	char	s1[] = "lorel ipsum dolor sit amet \n t";
	char	s1[] = "";
//	char	s2[] = "\n \t";
	char	s2[] = "";
	char	*s3;

	s3 = ft_strtrim(s1, " \n\t");
//	printf("%s\n", s1);
	printf("In main: %p\n", s3);
	printf("strcmp result = %d\n",strcmp(s3,s2));
	return (0);
}
*/
