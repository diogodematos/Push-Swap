/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:50:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/03/28 16:50:18 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_error2(t_stack *stack_a)
{
    int a;
    int b;
    int check;

    a = 0;
    check = 0;
    while (stack_a->stack[a + 1])
    {
        b = a + 1;
        while (stack_a->stack[b])
        {
            if (stack_a->stack[a] == stack_a->stack[b])
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