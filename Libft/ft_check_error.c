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

int	ft_check_error(int argc, char **argv)
{
	int	a;
	int check;

	a = 0;
	check = 0;
	if (argc < 1)
		return (check);
	if (argc == 2)
		while (argv[1][a])
		{
			if ((argv[1][a] < 48 || argv[1][a] > 57) && (argv[1][a] != 32))
			{
				ft_printf("Error\nmake fvclean
				");
				check += 1;
				return (check);
			}
			a++;
		}
	return (check);
}