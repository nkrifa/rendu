/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:43:15 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/18 15:36:36 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (j == 0)
		return(0);
	dest = (char*)malloc(sizeof(char) * (j + 1));
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
