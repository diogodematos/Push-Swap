/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:36:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/02/14 11:56:23 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void	sa(t_stack stack)
{
	int	t;
	int	a;
	
	if (stack.size < 2)
		return ;
	a = 0;
	t = stack.stack[a];
	stack.stack[a] = stack.stack[a+1];
	stack.stack[a+1] = t;
}

void	sb(t_stack stack)
{
	int	t;
	int	a;
	
	if (stack.size < 2)
		return ;
	a = 0;
	t = stack.stack[a];
	stack.stack[a] = stack.stack[a+1];
	stack.stack[a+1] = t;
}

void	ss(t_stack stacka, t_stack stackb)
{
	sa(stacka);
	sb(stackb);
}

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

void	ra(t_stack *stack)
{
	int	a;
	int	tmp;
	
	a = 0;
	tmp = stack->stack[a]; 
	while (a < stack->size-1)
	{
		stack->stack[a] = stack->stack[a+1];
		a++;
	}
	stack->stack[a] = tmp;
}

void	rb(t_stack *stack)
{
	int	a;
	int	tmp;
	
	a = 0;
	tmp = stack->stack[a]; 
	while (a < stack->size-1)
	{
		stack->stack[a] = stack->stack[a+1];
		a++;
	}
	stack->stack[a] = tmp;
}

void	rr(t_stack *stacka, t_stack *stackb)
{
	ra(stacka);
	rb(stackb);
}

void	rra(t_stack *stack)
{
	int	a;
	int	tmp;
	
	a = stack->size - 1;
	tmp = stack->stack[a];
	while (a > 0)
	{
		stack->stack[a] = stack->stack[a - 1];
		a--;
	}
	stack->stack[a] = tmp;
}

void	rrb(t_stack *stack)
{
	int	a;
	int	tmp;
	
	a = stack->size - 1;
	tmp = stack->stack[a];
	while (a > 0)
	{
		stack->stack[a] = stack->stack[a - 1];
		a--;
	}
	stack->stack[a] = tmp;
}

void	rrr(t_stack *stacka, t_stack *stackb)
{
	rra(stacka);
	rrb(stackb);
}

void    print_stacks(t_stack stack_a, t_stack stack_b)
{
    int j;
    j = 0;
    printf("%s", "Array A size: ");
    printf("%d", stack_a.size);
    printf("%s", "\n");
    printf("%s", "Array A: ");
    while (j < stack_a.size)
    {
        if (stack_a.stack[0] == 0)
        {
            printf("%s", "(null)");
            break ;
        }
        printf("%d", stack_a.stack[j]);
        printf("%s", "|");
        j++;
    }
    printf("%s", "\n");
    j = 0;
    printf("%s", "Array B size: ");
    printf("%d", stack_b.size);
    printf("%s", "\n");
    printf("%s", "Array B: ");
    while (j < stack_b.size)
    {
        if (stack_b.stack[0] == 0)
        {
            printf("%s", "(null)");
            break ;
        }
        printf("%d", stack_b.stack[j]);
        printf("%s", "|");
        j++;
    }
    printf("%s", "\n");
}

int	main(int argc, char **argv)
{
	int	num;
	int	a;
	t_stack	stack_a;
	t_stack	stack_b;

	num = 0;
	a = 0;
	stack_a.stack = malloc(sizeof(int) * (argc - 1));
	stack_b.stack = calloc(sizeof(int), (argc - 1));
	stack_a.size = argc - 1;
	stack_b.size = 0;
	while (a < stack_a.size)
	{
		num = atoi(argv[a+1]);
		stack_a.stack[a] = num;
		a++;
	}
	a = 0;
	//ss(stack_a, stack_b);
	print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pa(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	/*pa(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pa(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);
	pa(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	print_stacks(stack_a, stack_b);*/
	rrr(&stack_a, &stack_b); //stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;
	printf("jsh\n");
	print_stacks(stack_a, stack_b);
	//pb(stack_a, stack_b); stack_a.size = stack_a.size - 1; stack_b.size = stack_b.size + 1;*/
	/*while (stack_a.stack[a])
	{
		printf("sta2 %d\n", stack_a.stack[a]);
		a++;
	}
	a = 0;
	while (stack_b.stack[a])
	{
		printf("stb2 %d\n", stack_b.stack[a]);
		a++;
	}
	//print_stacks(stack_a, stack_b);
	//printf("stb %d\n", stack_a.size);*/
	return (0);
}




