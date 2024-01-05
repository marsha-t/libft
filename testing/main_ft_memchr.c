/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:44:33 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 23:44:33 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	const char	s[] = "abc";
	void		*test1;
	void		*test2;
	int	arr[] 	= {'a', 'b', 'e'};

	printf("n == 3\n");
	for (int i = 0; i < 3; i++)
	{
		test1 = (char *)ft_memchr(s, arr[i], 3);
		if (test1 == 0)
			printf("ft_memchr: null\n");
		else 
		{
			printf("ft_memchr: %c + ", *(char *)test1);
			printf("%c\n", *(char *)(test1 + 1));
		}
		test2 = (char *)memchr(s, arr[i], 3);
		if (test2 == 0)
			printf("   memchr: null\n");
		else 
		{
			printf("   memchr: %c + ", *(char *)test2);
			printf("%c\n", *(char *)(test2 + 1));
		}
		assert (test1 == test2);
	}
	printf("n == 5\n");
	for (int i = 0; i < 3; i++)
	{
		test1 = (char *)ft_memchr(s, arr[i], 3);
		if (test1 == 0)
			printf("ft_memchr: null\n");
		else 
		{
			printf("ft_memchr: %c + ", *(char *)test1);
			printf("%c\n", *(char *)(test1 + 1));
		}
		test2 = (char *)memchr(s, arr[i], 3);
		if (test2 == 0)
			printf("   memchr: null\n");
		else 
		{
			printf("   memchr: %c + ", *(char *)test2);
			printf("%c\n", *(char *)(test2 + 1));
		}
		assert (test1 == test2);
	}
}
