/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:22:36 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 23:22:36 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	s1[] = "0123";
	char	s2[20] = "   -+1234a567";
	char	s3[20] = " -345678a";
	char	s4[20] = "\n12345678";
	char	s5[20] = "a12345678";
	char	s6[20] = "\t+12345678";
	char	s7[50] = "9999999999999999";
	char	s8[50] = "9223372036854775807";
	char	s9[50] = "9223372036854775899";
	char	s10[50] = "-9223372036854775808";
	char	s11[50] = "-9223372036854775810";

	char *arr[] = {s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11}; 
	for (int i = 0; i < 11; i++)
	{
		printf("ft_atoi: %d\n", ft_atoi(arr[i]));
		printf("   atoi: %d\n", atoi(arr[i]));
		assert (ft_atoi(arr[i]) == atoi(arr[i]));
	}
	return (0);
}
