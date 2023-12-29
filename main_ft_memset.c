/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:22:04 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 17:22:04 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	void	*test1;
	void	*test2;
	int		arr[] = {33, 97, 280, 300, -406};

	for (int i = 0; i < 5; i++)
	{
		test1 = (void *)malloc(sizeof(unsigned char) * 4);
		test1 = ft_memset(test1, arr[i], 3);
		((unsigned char *)test1)[3] = '\0';
		printf("ft_memset: %s\n", test1);
		test2 = (void *)malloc(sizeof(unsigned char) * 4);
		test2 = memset(test2, arr[i], 3);
		((unsigned char *)test2)[3] = '\0';
		printf("   memset: %s\n", test2);
		for (int j = 0; j < 3; j++)
			assert(*(unsigned char *)(test1 + j) == *(unsigned char *)(test2 + j));
		free(test1);
		free(test2);
	}
}
