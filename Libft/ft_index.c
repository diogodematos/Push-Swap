/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:05:11 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/04/17 14:05:14 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sortcopy(t_stack *stack_c)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (stack_c->size - 1))
	{
		if (stack_c->stack[i] > stack_c->stack[i + 1])
		{
			tmp = stack_c->stack[i];
			stack_c->stack[i] = stack_c->stack[i+1];
			stack_c->stack[i+1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	ft_index(t_stack *stack_a)
{
	int	i;
	int j;
	t_stack	stack_c;

	i = 0;
	stack_c.stack = calloc((stack_a->size), sizeof(int));
	stack_c.size = stack_a->size;
	while (i < stack_c.size)
	{
		stack_c.stack[i] = stack_a->stack[i];
		i++;
	}
	stack_c.size = stack_a->size;
	ft_sortcopy(&stack_c);
	j = 0;
	while (j < stack_c.size)
	{
		i = 0;
		while (i < stack_a->size)
		{
			if (stack_a->stack[i] == stack_c.stack[j])
			{
				stack_a->stack[i] = j;
				j++;
			}
			i++;
		}
	}
}
