/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:57:56 by mateo             #+#    #+#             */
/*   Updated: 2023/12/19 08:57:56 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (len--)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
