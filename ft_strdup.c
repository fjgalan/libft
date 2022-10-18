/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-n <fgalan-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:04:33 by fgalan-n          #+#    #+#             */
/*   Updated: 2022/09/26 13:15:34 by fgalan-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	length;

	length = ft_strlen(s1);
	ptr = malloc(length + 1);
	if (!(ptr))
		return (NULL);
	ft_memcpy(ptr, s1, length);
	ptr[length] = '\0';
	return (ptr);
}
