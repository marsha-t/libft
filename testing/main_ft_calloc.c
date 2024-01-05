/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:29:17 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 23:29:17 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*char_ptr;
	int		*int_ptr;

	char_ptr = (char *)ft_calloc(5, sizeof(char));
	if (!char_ptr)
		printf("mem not allocated\n");
	else
	{
		printf("mem allocated: {");
		for (int i = 0; i < 7; i++)
		{
			if (char_ptr[i] == 0)
				printf("null,");
			else
				printf("nope, ");
		}
		printf("}\n");
	}
	int_ptr = (int *)ft_calloc(5, sizeof(int));
	if (!int_ptr)
		printf("mem not allocated\n");
	else
	{
		printf("mem allocated: {");
		for (int i = 0; i < 7; i++)
		{
			if (int_ptr[i] == 0)
				printf("null,");
			else
				printf("nope, ");
		}
		printf("}\n");
	}
	return (0);
}
