/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:45:45 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 17:45:45 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	void	*dst1;
	void	*dst2;
	void	*src;

	dst1 = (void *)malloc(sizeof(char) * 4);
	dst2 = (void *)malloc(sizeof(char) * 4);
	src = (void *)malloc(sizeof(char) * 4);
	for (int i = 0; i < 4; i++)
	{
		((char *)src)[i] = 'a' + i;
	}
	if (src > dst1)
		printf("ft_memmove: src > dst: ");
	else if (src < dst1)
		printf("ft_memmove: src < dst: ");
	dst1 = ft_memmove(dst1, src, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst1)[i]);
	}
	if (src > dst2)
		printf("\n   memmove: src > dst: ");
	else if (src < dst2)
		printf("\n   memmove: src < dst: ");
	dst2 = memmove(dst2, src, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst2)[i]);
		assert (((char *)dst2)[i] == ((char *)dst1)[i]);
	}
	free(dst1);
	free(dst2);
	free(src);

	dst1 = (void *)malloc(sizeof(char) * 4);
	src = (void *)malloc(sizeof(char) * 4);
	for (int i = 0; i < 4; i++)
	{
		((char *)src)[i] = 'a' + i;
	}
	if (src > dst1)
		printf("\nft_memmove: src > dst: ");
	else if (src < dst1)
		printf("\nft_memmove: src < dst: ");
	dst1 = ft_memmove(dst1, src, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst1)[i]);
	}
	dst2 = (void *)malloc(sizeof(char) * 4);
	if (src > dst2)
		printf("\n   memmove: src > dst: ");
	else if (src < dst2)
		printf("\n   memmove: src < dst: ");
	dst2 = memmove(dst2, src, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst2)[i]);
		assert (((char *)dst2)[i] == ((char *)dst1)[i]);
	}
	
	free(dst1);
	free(dst2);

	dst1 = src;
	dst1 = ft_memmove(dst1, src, 4);
	if (src == dst1)
		printf("\nft_memmove: src = dst: ");
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst1)[i]);
	}
	dst2 = src; 
	dst2 = memmove(dst2, src, 4);
	if (src == dst2)
		printf("\n   memmove: src = dst: ");
	for (int i = 0; i < 4; i++)
	{
		printf("%c, ", ((char *)dst1)[i]);
		assert (((char *)dst2)[i] == ((char *)dst1)[i]);
	}
}
