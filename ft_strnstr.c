/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-n <fgalan-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:55:14 by fgalan-n          #+#    #+#             */
/*   Updated: 2022/09/25 14:21:13 by fgalan-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	while (*haystack && len_needle <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, len_needle)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
