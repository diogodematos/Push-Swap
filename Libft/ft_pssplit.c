/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pssplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:35:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/03/21 21:35:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_pssplit(t_stack *stack_a, t_stack *stack_b, char **argv)
{
    char	**num;
	int	a;
	
    num = ft_split(argv[1], ' ');
	a = 0;
	stack_a->stack = calloc((ft_strlen(argv[1])), sizeof(int));
	stack_b->stack = calloc((ft_strlen(argv[1])), sizeof(int));
	stack_b->size = 0;
    while (num[a])
    {
        stack_a->stack[a] = ft_atoi(num[a]);
        free(num[a]);
        a++;
    }
    stack_a->size = a;
    free(num);
}