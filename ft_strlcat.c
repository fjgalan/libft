/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-n <fgalan-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:30:28 by fgalan-n          #+#    #+#             */
/*   Updated: 2022/10/04 12:01:44 by fgalan-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	len_dst_copy;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	len_dst_copy = len_dst;
	i = 0;
	if ((len_dst < dstsize - 1) && (dstsize > 0))
	{
		while (src[i] && len_dst + i < dstsize - 1)
		{
			dst[len_dst_copy] = src[i];
			len_dst_copy++;
			i++;
		}
		dst[len_dst_copy] = 0;
	}
	if (len_dst >= dstsize)
		len_dst = dstsize;
	return (len_dst + len_src);
}
