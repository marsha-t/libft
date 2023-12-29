/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:38:23 by mateo             #+#    #+#             */
/*   Updated: 2023/12/20 23:38:23 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	char	*arr[] = {"abc", "", "jadsfajadfiugaiufadincfoane fdfa aguifgre a"};
	char	*ptr1;
	char	*ptr2; 
	for (int i = 0; i < 3; i++)
	{
		ptr1 = ft_strdup(arr[i]);
		ptr2 = strdup(arr[i]);
		printf("ft_strdup: %s\n", ptr1);
		printf("   strdup: %s\n", ptr2);
		assert (strcmp(ptr1, ptr2) == 0);
	}
	return (0);
}
