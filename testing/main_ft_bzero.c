/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:59:31 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 15:59:31 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	void	*test1;
	void	*test2;

	test1 = (void *)malloc(sizeof(unsigned char) * 4);
	test2 = (void *)malloc(sizeof(unsigned char) * 4);
	for (int i = 0; i < 3; i++)
	{
		((unsigned char *)test1)[i] = 'a';
		((unsigned char *)test2)[i] = 'a';
	}
	printf("ft_bzero: original: ");
	for (int i = 0; i < 4; i++)
	{
		printf("%c", ((unsigned char *)test1)[i]);
	}
	ft_bzero(test1, 3);
	printf("; after: ");
	for (int i = 0; i < 4; i++)
	{
		if (((unsigned char *)test1)[i] == 0)
			printf("null, ");
	}
	printf("\n   bzero: original: ");
	for (int i = 0; i < 4; i++)
	{
		printf("%c", ((unsigned char *)test2)[i]);
	}
	bzero(test2, 3);
	printf("; after: ");
	for (int i = 0; i < 4; i++)
	{
		if (((unsigned char *)test2)[i] == 0)
			printf("null, ");
		assert (((unsigned char *)test1)[i] == ((unsigned char *)test2)[i]);
	}
}
