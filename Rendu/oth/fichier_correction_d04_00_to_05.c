/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichier_correction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glictevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:16:30 by glictevo          #+#    #+#             */
/*   Updated: 2016/08/09 23:02:25 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//EXERCICE 00
int		ft_iterative_factorial(int nb);
//EXERCICE 01
int		ft_recursive_factorial(int nb);
//EXERCICE 02
int		ft_iterative_power(int nb, int power);
//EXERCICE 03
int		ft_recursive_power(int nb, int power);
//EXERCICE 04
int		ft_fibonacci(int index);
//EXERCICE 05
int		ft_sqrt(int nb);

int		main(void)
{
	printf("EXERCICE 00");
	printf("\n");
	printf("Doit afficher \"0\" puis \"1\" puis \"1\" puis \"120\" puis \"0\"");
	printf("\n");
	printf("%d", ft_iterative_factorial(-42));
	printf("\n");
	printf("%d", ft_iterative_factorial(0));
	printf("\n");
	printf("%d", ft_iterative_factorial(1));
	printf("\n");
	printf("%d", ft_iterative_factorial(5));
	printf("\n");
	printf("%d", ft_iterative_factorial(13));
	printf("\n");
	printf("Le prochain resultat doit mettre moins de deux secondes a s'afficher et afficher \"479001600\"");
	printf("\n");
	printf("%d", ft_iterative_factorial(12));
	printf("\n");
	
	printf("EXERCICE 01");
	printf("\n");
	printf("Doit afficher \"0\" puis \"1\" puis \"1\" puis \"120\" puis \"0\"");
	printf("\n");
	printf("%d", ft_recursive_factorial(-42));
	printf("\n");
	printf("%d", ft_recursive_factorial(0));
	printf("\n");
	printf("%d", ft_recursive_factorial(1));
	printf("\n");
	printf("%d", ft_recursive_factorial(5));
	printf("\n");
	printf("%d", ft_recursive_factorial(12));
	printf("\n");

	printf("EXERCICE 02");
	printf("\n");
	printf("Doit afficher \"0\" puis \"16\" puis \"1\" puis \"-32\"");
	printf("\n");
	printf("%d", ft_iterative_power(2, -42));
	printf("\n");
	printf("%d", ft_iterative_power(2, 4));
	printf("\n");
	printf("%d", ft_iterative_power(42, 0));
	printf("\n");
	printf("%d", ft_iterative_power(-2, 5));
	printf("\n");
	printf("Le prochain resultat doit mettre moins de deux secondes a s'afficher et afficher \"1073741824\"");
	printf("\n");
	printf("%d", ft_iterative_power(2, 30));
	printf("\n");
	
	printf("EXERCICE 03");
	printf("\n");
	printf("Doit afficher \"0\" puis \"16\" puis \"1\" puis \"-32\"");
	printf("\n");
	printf("%d", ft_recursive_power(2, -42));
	printf("\n");
	printf("%d", ft_recursive_power(2, 4));
	printf("\n");
	printf("%d", ft_recursive_power(42, 0));
	printf("\n");
	printf("%d", ft_recursive_power(-2, 5));
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 04");
	printf("\n");
	printf("Doit afficher \"-1\" puis \"0\" puis \"1\" puis \"1\" puis \"2\" puis \"3\" puis \"5\" puis \"8\" puis \"13\" puis \"21\" puis \"-1\"");
	printf("\n");
	printf("%d", ft_fibonacci(-1));
	printf("\n");
	printf("%d", ft_fibonacci(0));
	printf("\n");
	printf("%d", ft_fibonacci(1));
	printf("\n");
	printf("%d", ft_fibonacci(2));
	printf("\n");
	printf("%d", ft_fibonacci(3));
	printf("\n");
	printf("%d", ft_fibonacci(4));
	printf("\n");
	printf("%d", ft_fibonacci(5));
	printf("\n");
	printf("%d", ft_fibonacci(6));
	printf("\n");
	printf("%d", ft_fibonacci(7));
	printf("\n");
	printf("%d", ft_fibonacci(8));
	printf("\n");
	printf("%d", ft_fibonacci(47));
	printf("\n");
	
	printf("EXERCICE 05");
	printf("\n");
	printf("Doit afficher \"1\" puis \"2\" puis \"0\" puis \"0\" puis \"5\"");
	printf("\n");
	printf("%d", ft_sqrt(1));
	printf("\n");
	printf("%d", ft_sqrt(4));
	printf("\n");
	printf("%d", ft_sqrt(11));
	printf("\n");
	printf("%d", ft_sqrt(5));
	printf("\n");
	printf("%d", ft_sqrt(25));
	printf("\n");
	printf("Le prochain resultat doit mettre moins de deux secondes a s'afficher et afficher \"0\"");
	printf("\n");
	printf("%d", ft_sqrt(2147395699));
	printf("\n");
}
