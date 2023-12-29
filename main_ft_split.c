/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:18:14 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 09:18:14 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char 	str[] = "abc def ghi ";
	char **ptr1;
	char **ptr3;	
	char *str2 = " ";
	char **ptr4;
	char **ptr5;

	printf("\\\\\\ Example 1: space as separator\n");
	ptr1 = ft_split(str, ' ');
	printf("%s\n", ptr1[0]);
	printf("%s\n", ptr1[1]);
	printf("%s\n", ptr1[2]);
	printf("\\\\\\ Example 2: tab as separator\n");
	ptr3 = ft_split(str, '\t');
	printf("%s\n", ptr3[0]);
	printf("\\\\\\ Example 3: space as separator but string only has space\n");
	ptr4 = ft_split(str2, ' ');
	printf("%s\n", ptr4[0]);
	printf("\\\\\\ Example 4: Empty string\n");
	ptr5 = ft_split("", 'a');
	printf("%s\n", ptr5[0]);
	return (0);
}
