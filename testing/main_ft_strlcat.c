/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:57:06 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 22:57:06 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int	main(void)
{
	size_t	n1; 
	size_t	n2;
	char	src[11] = "5678901";
	char	dest1[30]= "1234";
	char	dest2[30]= "1234";
	char	dest3[20] = "1234";
	char	dest4[20] = "1234";
	char	dest5[20] = "1234";
	char	dest6[20] = "1234";
	char	dest7[20] = "1234";
	// char	dest8[20] = "1234";

	n1 = ft_strlcat(dest1, src, 6); 
	printf("ft_strlcat: src: %s, dest: %s, return value: %zu\n", src, dest1, n1);
	n2 = strlcat(dest2, src, 6);
	printf("strlcat:    src: %s, dest: %s, return value: %zu\n", src, dest2, n2);
	assert (n1 == n2);
	for (int i = 0; i < 6; i++)
	{
		assert (dest1[i] == dest2[i]);
	}

	n1 = ft_strlcat(dest3, src, 3); 
	printf("ft_strlcat: src: %s, dest: %s, return value: %zu\n", src, dest3, n1);
	n2 = strlcat(dest4, src, 3); 
	printf("strlcat:    src: %s, dest: %s, return value: %zu\n", src, dest4, n2);
	assert (n1 == n2);
	for (int i = 0; i < 3; i++)
	{
		assert (dest3[i] == dest4[i]);
	}
	
	n1 = ft_strlcat(dest5, src, 0); 
	printf("ft_strlcat: src: %s, dest: %s, return value: %zu\n", src, dest5, n1);
	n2 = strlcat(dest6, src, 0); 
	printf("strlcat:    src: %s, dest: %s, return value: %zu\n", src, dest6, n2);
	assert (n1 == n2);
	assert (dest5[0] == dest6[0]);
		
	n1 = ft_strlcat(dest7, src, 30); 
	printf("ft_strlcat: src: %s, dest: %s, return value: %zu\n", src, dest7, n1);
	// n2 = strlcat(dest8, src, 30); 
	// printf("strlcat:    src: %s, dest: %s, return value: %zu\n", src, dest8, n2);
	// assert (n1 == n2);
	// for (int i = 0; i < 30; i++)
	// {
	// 	assert (dest7[i] == dest8[i]);
	// }
	return (0);
}
