/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:58:52 by nkrifa            #+#    #+#             */
/*   Updated: 2016/08/15 18:14:15 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
char	**ft_sort(char **str, char **dest, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j <= n)
	{
		while (str[j][i] != '\0' && (str[j][i] == str[j][i + 1]))
			i++;
		while (str[j][i] != str[j][i])
		{
		if (str[j][i] < str[j][i + 1])
			**dest = **dest + str[j][i] + str[j][i + 1];
		else if (str[j][i] > str[j][i + 1])
			**dest = **dest + str[j][i + 1] + str[j][i];
		}
		j++;
	}
	return (**dest);
}


int		main(int argc, char **argv)
{
	int i;
	int **str;
	int **srt;
	**str = ft_sort(**argv, **srt, argc);
}
