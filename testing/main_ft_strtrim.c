/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:24:20 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 08:24:20 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_strtrimlen(char const *s1, char const *set)
{
	int	len;

	while (ft_is_set(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (0);
	len = 0;
	while (*s1)
	{
		len++;
		s1++;
	}
	s1--;
	while (ft_is_set(*s1, set))
	{
		len--;
		s1--;
	}
	if (len < 0)
	{
		len = 0;
	}
	return ((size_t)len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	if ((!s1) || (!set))
		return (0);
	len = ft_strtrimlen(s1, set);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (ft_is_set(*s1, set))
		s1++;
	i = 0;
	// while ((len--) && (*s1))
	while ((len--))
	{
		printf("here\n");
		ptr[i] = *s1;
		i++;
		s1++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	// printf("%s.\n", ft_strtrim(" \n \t abc123", " \n\t123"));
	// printf("%s.\n", ft_strtrim("   abc123   ", " "));
	// printf("%s.\n", ft_strtrim("   abc123   ", "e"));
	// printf("%s.\n", ft_strtrim("aaa", "a"));
	// printf("%s.\n", ft_strtrim("", "e"));
	// printf("%s.\n", ft_strtrim("", ""));
	char *trim;
	trim = ft_strtrim("", "e");
	if (!trim)
		printf("null");
	else if (trim[0] == '\0')
		printf("empty");

	return (0);
}
