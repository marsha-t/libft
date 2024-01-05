/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:17:02 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 22:17:02 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int	main(void)
{
	char	str[] = "abcd";
	char	*ptr1;
	char	*ptr2;
	int		test[] = {'a', 'b', 'c', 'd', 'e', 'a' + 256, '\0'};
	
	for (int i = 0; i < 7; i++)
	{
		ptr1 = ft_strchr(str, test[i]);
		if (i < 6)
			printf("%c: %s\n", test[i], ptr1);
		if (i == 6)
			printf("%c: %s\n", test[i], --ptr1);
		ptr2 = strchr(str, test[i]);
		if (i < 6)
			printf("%c: %s\n", test[i], ptr2);
		if (i == 6)
			printf("%c: %s\n", test[i], --ptr2);
		if (i != 4)
			assert (*ptr1 == *ptr2);
		assert (ptr1 == ptr2);
	}
}

// int main()
// {
// 	printf("%c", 'a' + 256);
// }