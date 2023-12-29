/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:13:31 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 23:13:31 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int	main(void)
{
	size_t	arr[] = {2, 4, 10, 0};

	for (int i = 0; i < 4; i++)
	{
		printf("ft_strnstr: %s\n", ft_strnstr("abcdef", "cd", arr[i]));
		printf("   strnstr: %s\n", strnstr("abcdef", "cd", arr[i]));
		assert (ft_strnstr("abcdef", "cd", arr[i]) == strnstr("abcdef", "cd", arr[i]));
	}
	for (int i = 0; i < 4; i++)
	{
		printf("ft_strnstr: %s\n", ft_strnstr("abcdef", "z", arr[i]));
		printf("   strnstr: %s\n", strnstr("abcdef", "z", arr[i]));
		assert (ft_strnstr("abcdef", "z", arr[i]) == strnstr("abcdef", "z", arr[i]));
	}
	return (0);
}
