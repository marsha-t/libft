/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:10:22 by mateo             #+#    #+#             */
/*   Updated: 2023/12/21 10:10:22 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (0);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (*s)
	{
		ptr[i] = f(i, *s);
		s++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
