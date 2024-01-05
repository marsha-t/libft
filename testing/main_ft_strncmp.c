/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:35:11 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 21:35:11 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	const char	s1[] = "abc";
	const char	s2[] = "abd";

	for (int i = 0; i < 5; i++)
	{
		printf("i = %d: ft_strncmp: %d\n", i, ft_strncmp(s1, s2, i));
		printf("          strncmp: %d\n", strncmp(s1, s2, i));
		assert (ft_strncmp(s1, s2, i) == strncmp(s1, s2, i));
	}
	return (0);
}
