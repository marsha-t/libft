/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:19:50 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 22:19:50 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int	main(void)
{
	char	*dest1;
	char	*dest2;
	size_t	ret1;
	size_t	ret2;

	dest1 = (char *)malloc(sizeof(char) * 5);
	dest2 = (char *)malloc(sizeof(char) * 5);
	for (int i = 0; i < 6; i++)
	{
		ret1 = ft_strlcpy(dest1, "abc", i);
		printf("%d: ft_strlcpy: %zu, %s\n", i, ret1, dest1);
		ret2 = strlcpy(dest2, "abc", i);
		printf("      strlcpy: %zu, %s\n", ret2, dest2);
		assert (ret1 == ret2);
		for (int j = 0; j < 6; j++)
		{
			assert (dest1[j] == dest2[j]);
		}
	}
	return (0);
}
