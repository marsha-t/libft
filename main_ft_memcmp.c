/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:58:08 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 15:58:08 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	const char	s1[] = "abc";
	const char	s2[] = "abd";

	for (int i = 0; i < 5; i++)
	{
		printf("i = %d: ft_memcmp: %d\n", i, ft_memcmp(s1, s2, i));
		printf("          memcmp: %d\n", memcmp(s1, s2, i));
		assert (ft_memcmp(s1, s2, i) == memcmp(s1, s2, i));
	}
	const int	i1[] = {1, 2, 3};
	const int	i2[] = {1, 2, 3};
	for (int i = 0; i < 5; i++)
	{
		printf("i = %d: ft_memcmp: %d\n", i, ft_memcmp(i1, i2, i));
		printf("          memcmp: %d\n", memcmp(i1, i2, i));
		assert (ft_memcmp(i1, i2, i) == memcmp(i1, i2, i));
	}
	return (0);
}
