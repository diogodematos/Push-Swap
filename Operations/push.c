/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:36:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/02/06 13:36:17 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

/*void	pa(t_stack stacka, t_stack stackb)
{
	int	a;
	t_stack	tmp;
	
	if (stackb.size < 1)
		return ;
	a = 0;
	tmp.stack = malloc(sizeof(int) * (stacka.size + 1));
	ft_memmove(tmp.stack + 1, stacka.stack, sizeof(int) * stacka.size);
	free(stacka.stack);
	tmp.stack[a] = stackb.stack[a];
	stacka.stack = malloc(sizeof(int) * (stacka.size + 1));
	ft_memcpy(stacka.stack, tmp.stack, stacka.size);
	free(tmp.stack);
	
	stackb.size = stackb.size--;
	tmp.stack = malloc(sizeof(int) * (stackb.size));
	ft_memmove(tmp.stack, stackb.stack + 1, stackb.size);
	free(stackb.stack);
	stackb.stack = malloc(sizeof(int) * stackb.size);
	ft_memcpy(stackb.stack, tmp.stack, stackb.size);
	free(tmp.stack);
}*/

void	pa(t_stack *stacka, t_stack *stackb)
{
	int	a;
	
	a = stacka->size;
	stacka->size = stacka->size + 1;
	while (a > 0)
	{
		stacka->stack[a] = stacka->stack[a-1];
		a--;	
	}
	stacka->stack[a] = stackb->stack[a];
	a = -1;
	stackb->size = stackb->size - 1;
	while (a++ <= stackb->size)
		stackb->stack[a] = stackb->stack[a+1];
}

/*void	pb(t_stack stacka, t_stack stackb)
{
	int	a;
	t_stack	tmp;
	
	if (stacka.size < 1)
		return ;
	a = 0;
	stackb.size = stackb.size + 1;
	tmp.stack = malloc(sizeof(int) * (stackb.size));
	ft_memmove(tmp.stack + 1, stackb.stack, sizeof(int) * stackb.size);
	free(stackb.stack);
	tmp.stack[a] = stacka.stack[a];
	stackb.stack = malloc(sizeof(int) * (stackb.size));
	ft_memcpy(stackb.stack, tmp.stack, sizeof(int) * stackb.size);
	free(tmp.stack);
	printf("sizeb %d\n", stackb.size);
	
	stacka.size = stacka.size - 1;
	printf("size  %d\n", stacka.size);
	tmp.stack = malloc(sizeof(int) * (stacka.size));
	ft_memcpy(tmp.stack, stacka.stack + 1, sizeof(int) * stacka.size);
	free(stacka.stack);
	stacka.stack = malloc(sizeof(int) * stacka.size);
	ft_memcpy(stacka.stack, tmp.stack, sizeof(int) * stacka.size);
	printf("stb2zfsdffdf %d\n", stacka.stack[1]);
	printf("size  %d\n", stacka.size);
	free(tmp.stack);
}*/

void	pb(t_stack *stacka, t_stack *stackb)
{
	int	a;
	
	a = stackb->size;
	stackb->size = stackb->size + 1;
	while (a > 0)
	{
		stackb->stack[a] = stackb->stack[a - 1];
		a--;	
	}
	stackb->stack[a] = stacka->stack[a];
	a = -1;
	stacka->size = stacka->size - 1;
	while ( a++ <= stacka->size)
		stacka->stack[a] = stacka->stack[a + 1];
}
