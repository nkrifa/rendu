/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:42:28 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/19 13:49:21 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_separator(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

int		ft_number_words(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (ft_separator(str[i]) == 1)
			i++;
		if (str[i])
			j++;
		while (str[i] && ft_separator(str[i]) == 0)
			i++;
	}
	return (j + 1);
}

char	*ft_strsub(char *str, int start, int end)
{
	char	*s;
	int		i;

	i = 0;
	if ((s = (char *)malloc(sizeof(char) * (end - start + 2))) == 0)
		return (NULL);
	while (start <= end)
	{
		s[i] = str[start];
		i++;
		start++;
	}
	s[start] = '\0';
	return (s);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		start;
	int		j;

	j = 0;
	i = 0;
	if ((tab = (char **)malloc(sizeof(char*) * (ft_number_words(str)))) == 0)
		return (NULL);
	while (j < ft_number_words(str))
	{
		while (str[i] && ft_separator(str[i]) == 1)
			i++;
		start = i;
		while (str[i] && ft_separator(str[i]) == 0)
			i++;
		tab[j] = ft_strsub(str, start, i);
		j++;
	}
	tab[j] = 0;
	return (tab);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (i < ft_number_words(av[1]))
		{
			printf("%s\n", ft_split_whitespaces(av[1])[i]);
			i++;
		}
		return (0);
	}
}
