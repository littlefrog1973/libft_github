/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:06:55 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/06/16 14:57:20 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

static size_t	num_dim(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static size_t	dim_pos(char const *s, char c, size_t *tmp_pos)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	tmp_pos[0] = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			++count;
			tmp_pos[count] = i;
		}
		i++;
	}
	tmp_pos[count + 1] = i;
	return (count);
}

void	do_split(char const *s, size_t count, size_t  *tmp_pos, char **split)
{
	size_t	i;
	char	*tmp_str;
	unsigned int	start;

	i = 0;
	tmp_str = 0;
	while (i <= count)
	{
		*split = (char *) malloc((tmp_pos[i + 1] - tmp_pos[i] + 1));
		start = (unsigned int) tmp_pos[i] + 1;
		if (i == 0)
		{
			tmp_str = ft_substr(s, 0, tmp_pos[1]);
		}
		else
		{
			tmp_str = ft_substr(s, start, tmp_pos[i + 1] - tmp_pos[i]);
		}
		printf("tmp_str[%lu] = %s\n", i, tmp_str);
		ft_strlcpy(*(split + i), tmp_str, tmp_pos[i + 1] - tmp_pos[i] + 1);
		printf("%s\n",*(split + i));
		free(tmp_str);
		i++;	
	}
	free(tmp_pos);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**split;
	size_t	*tmp_pos;

	split = 0;
	count = 0;
	count = num_dim(s, c);
	if (count == ft_strlen(s) || count == 0)
	{
		exit (1);
	}
	tmp_pos = (size_t *) malloc((count + 2) * sizeof(size_t));
	if (!tmp_pos)
	{
		return (NULL);
	}
	count = dim_pos(s, c, tmp_pos);
	split = (char **) malloc((count + 1) * sizeof(char *));
	do_split(s, count, tmp_pos, split);
	return (split);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "0123456789";
	char **split;
	size_t i;
	
	split = 0;
	split = ft_split(str, '4');
	i = 0;
	while (i < 2)
	{
		printf("split[%lu] = %s\n", i, *(split + i));
		i++;
	}
	return (0);
}
