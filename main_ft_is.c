/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:06:26 by mateo             #+#    #+#             */
/*   Updated: 2023/12/18 16:06:26 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	main(void)
{
	int	arr[] = {0, 1, 32, 33, 48, 57, 58, 65, 90, 91, 97, 122, 126, 127, 128};

	for (int i = 0; i < 15; i++)
	{
		printf("%d: ft_isalpha: %d, ft_isdigit: %d, ft_isalnum: %d, ft_isprint: %d, ft_isascii: %d\n", \
			arr[i], ft_isalpha(arr[i]), ft_isdigit(arr[i]), ft_isalnum(arr[i]), ft_isprint(arr[i]), ft_isascii(arr[i]));
		printf("%d:    isalpha: %d,    isdigit: %d,    isalnum: %d,    isprint: %d,    isascii: %d\n", \
			arr[i], isalpha(arr[i]), isdigit(arr[i]), isalnum(arr[i]), isprint(arr[i]), isascii(arr[i]));
		assert(ft_isalnum(arr[i]) == isalnum(arr[i]));
		assert(ft_isalpha(arr[i]) == isalpha(arr[i]));
		assert(ft_isascii(arr[i]) == isascii(arr[i]));
		assert(ft_isdigit(arr[i]) == isdigit(arr[i]));
		assert(ft_isprint(arr[i]) == isprint(arr[i]));
	}
	return (0);
}
