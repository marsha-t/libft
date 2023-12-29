/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:15:17 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 23:15:17 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

int	main(void)
{
	char	str[] = "abcddcba";
	char	*ptr1;
	char	*ptr2;
	char	test[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	for (int i = 0; i < 6; i++)
	{
		ptr1 = ft_strrchr(str, test[i]);
		if (i < 4)
			printf("%c: %s\n", test[i], ptr1);
		if (ptr1 == 0)
			printf("null\n");
		if (i == 5)
			printf("%c: %s\n", test[i], --ptr1);
		ptr2 = strrchr(str, test[i]);
		if (i < 4)
			printf("%c: %s\n", test[i], ptr2);
		if (ptr2 == 0)
			printf("null\n");
		if (i == 5)
			printf("%c: %s\n", test[i], --ptr2);
		if (i != 4)
			assert (*ptr1 == *ptr2);
		assert (ptr1 == ptr2);
	}
}
