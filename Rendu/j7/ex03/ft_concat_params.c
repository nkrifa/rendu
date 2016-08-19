/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 20:08:19 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/18 22:56:21 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_first(int argc, char **argv)
{
	int		n;
	int		i;

	i = 1;
	n = 0;
	while (i < argc)
	{
		n += ft_strlen(argv[i]);
		n++;
		i++;
	}
	return (n);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	if ((str = (char*)malloc(sizeof(int) * ft_first(argc, argv))) == NULL)
		return (NULL);
	n = 0;
	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			str[n] = argv[j][i];
			n++;
			i++;
		}
		if (j + 1 != argc)
			str[n++] = '\n';
		i = 0;
		j++;
	}
	str[n] = '\0';
	return (str);
}
