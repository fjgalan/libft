/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalan-n <fgalan-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:37:09 by fgalan-n          #+#    #+#             */
/*   Updated: 2022/09/26 14:49:21 by fgalan-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	i;
	size_t	counter_2;

	i = 0;
	counter_2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(string))
		return (0);
	while (i < ft_strlen(s1))
	{
		string[i] = s1[i];
		i++;
	}
	while (counter_2 < ft_strlen(s2))
	{
		string[i] = s2[counter_2];
		i++;
		counter_2++;
	}
	string[i] = '\0';
	return (string);
}
