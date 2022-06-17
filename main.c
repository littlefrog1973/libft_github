#include <stdio.h>
#include <libft.h>

int	main(void)
{
	char	s1[] = "lorel ipsum dolor sit amet";
	char	s2[] = "ei";
	char	*s3;

	s3 = ft_strtrim(s1, s2);
	printf("before trim = %s\n", s1);
	printf("after itrim  = %s\n", s3);
	return (0);
}
