/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:09:09 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 17:09:09 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	// Normal testing with char
	char	*dst1_char;
	char	*dst2_char;
	dst1_char = (char *)malloc(sizeof(char) * 5);
	dst1_char = ft_memcpy(dst1_char, "abcd", 5);
	printf("ft_memcpy: %s\n", dst1_char);
	dst2_char = (char *)malloc(sizeof(char) * 5);
	dst2_char = memcpy(dst2_char, "abcd", 5);
	printf("   memcpy: %s\n", dst2_char);
	for (int i = 0; i < 5; i++)
	{
		assert (*(dst1_char + i) == *(dst2_char + i));
	}
	
	// Testing with size = 0 with char
	dst1_char = ft_memcpy(dst1_char, "123", 0);
	printf("ft_memcpy: %s\n", dst1_char);
	dst2_char = memcpy(dst2_char, "123", 0);
	printf("   memcpy: %s\n", dst2_char);
	for (int i = 0; i < 5; i++)
	{
		assert (*(dst1_char + i) == *(dst2_char + i));
	}

	// Normal testing with int
	int	src_int[] = {1, 2, 3, 4};
	int *dst1_int;
	int *dst2_int;
	dst1_int = (int *)malloc(sizeof(int) * 4);
	dst1_int = ft_memcpy(dst1_int, src_int, sizeof(int) * 4);
	printf("ft_memcpy: %d, %d, %d, %d\n", dst1_int[0], dst1_int[1], dst1_int[2], dst1_int[3]);
	dst2_int = (int *)malloc(sizeof(int) * 4);
	dst2_int = memcpy(dst2_int, src_int, sizeof(int) * 4);
	printf("   memcpy: %d, %d, %d, %d\n", dst2_int[0], dst2_int[1], dst2_int[2], dst2_int[3]);
	for (int i = 0; i < 4; i++)
	{
		assert (dst1_int[i] == dst2_int[i]);
	}
	
	// Testing with size = 0 with int
	dst1_int[0] = 5;
	dst1_int = ft_memcpy(dst1_int, src_int, 0);
	printf("ft_memcpy: %d\n", dst1_int[0]);
	dst2_int[0] = 5;
	dst2_int = memcpy(dst2_int, src_int, 0);
	printf("   memcpy: %d\n", dst2_int[0]);
	assert (*(dst1_int) == *(dst2_int));
	
	// void pointers passed as arguments
	if (ft_memcpy((void *)0, (void *)0, 1) == 0)
		printf("ft_memcpy: null\n");
	if (memcpy((void *)0, (void *)0, 1) == 0)
		printf("   memcpy: null\n");

	// ft_memcpy((void *)0, "abc", 1); // segmentation error 
	// memcpy((void *)0, "abc", 1); // segmentation error 
	char dest[10];
	// ft_memcpy(dest, (void *)0, 1); // segmentation error
	// memcpy(dest, (void *)0, 1); // segmentation error
	

}
