/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:42:57 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/03/22 14:42:59 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_digit(char **argv)
{
	int	a;
	int check;

	check = 0;
	a = 0;
	while (argv[1][a])
	{
	if (((argv[1][a] < 48 || argv[1][a] > 57) && (argv[1][a] != 32) && (argv[1][a] != 45)) || ((argv[1][a] == 45) 
		&& (argv[1][a+1] < 48 || argv[1][a+1] > 57) && ((argv[1][a+1] == 45) || (argv[1][a+1] == 32))))
		{
			ft_printf("Error\n");
			check += 1;
			return (check);
		}
		a++;
	}
	return (check);
}

int	ft_check_digit2(char **argv)
{
	int	a;
	int	b;
	int check;

	check = 0;
	a = 1;
	b = 0;
	while (argv[a])
	{
		b = 0;
		while (argv[a][b])
		{
			if (((argv[a][b] < 48 || argv[a][b] > 57) && (argv[a][b] != 45)) 
				|| ((argv[a][b] == 45) && ((argv[a][b+1] < 48 || argv[a][b+1] > 57) || argv[a][b+1] == 45)))
			{
				ft_printf("Error\n");
				check += 1;
				return (check);
			}
			b++;
		}
		a++;
	}
	return (check);
}

int	ft_check_error(int argc, char **argv)
{
	//int	a;
	static int check;

	//a = 0;
	if (argc < 1)
		return (check);
	if (argc == 2)
	{
		if (ft_check_digit(argv) == 1)
		{
			check += 1;
			return (check);
		}
	}
	else
	{
		if (ft_check_digit2(argv) == 1)
		{
			check += 1;
			return (check);
		}
	}
	return (check);
}
