/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:01:09 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 18:01:09 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	main(void)
{
	int	arr[] = {0, 65, 97, 126, 127, 321};

	for (int i = 0; i < 6; i++)
	{
		printf("%d/%c: \n", arr[i], arr[i]);
		printf("ft_toupper: %d/%c\n", ft_toupper(arr[i]), ft_toupper(arr[i]));
		printf("   toupper: %d/%c\n", toupper(arr[i]), toupper(arr[i]));
		printf("ft_tolower: %d/%c\n", ft_tolower(arr[i]), ft_tolower(arr[i]));
		printf("   tolower: %d/%c\n", tolower(arr[i]), tolower(arr[i]));
		assert(ft_toupper(arr[i]) == toupper(arr[i]));
		assert(ft_tolower(arr[i]) == tolower(arr[i]));
	}
	return (0);
}
