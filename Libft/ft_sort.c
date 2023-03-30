/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:27:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/03/30 15:27:37 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_sort3(t_stack *stack_a, t_stack *stack_b)
{
  int a;

  a = 0;
  if ((stack_a->stack[a] > stack_a->stack[a+1]) && (stack_a->stack[a] > stack_a->stack[stack_a->max]))
  {
    ra(stack_a);
    return (ft_sort3(stack_a, stack_b));
  }
  else if ((stack_a->stack[a] > stack_a->stack[a+1]) && (stack_a->stack[a] < stack_a->stack[stack_a->max]))
  {
    sa(stack_a);
    return (ft_sort3(stack_a, stack_b));
  }
  else if (stack_a->max < stack_a->stack[a+1])
  {
    pb(stack_a, stack_b);
    sa(stack_a);
    pa(stack_a, stack_b);
    return (ft_sort3(stack_a, stack_b));
  }
}

void ft_sort(t_stack *stack_a, t_stack *stack_b)
{
  if (stack_a->size == 3)
  {
    ft_sort3(stack_a, stack_b);
  }
}
