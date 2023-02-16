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

//#include "../Libft/libft.h"

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct	Stack
{
	int	top;
	unsigned	capacity;
	int	*array;
};

struct Stack	*stack_a(unsigned capacity)
{
	struct Stack* sta = (struct Stack*)malloc(sizeof(struct Stack));
	sta->capacity = capacity;
	sta->top = -1;
	sta->array = (int*)malloc(sta->capacity * sizeof(int));
	return sta;
}

int	isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

void	push(struct Stack* stack, int item)
{
	stack->array[++stack->top] = item;
}

int	pop(struct Stack* stack)
{
	return stack->array[stack->top--];	
}

int	peek(struct Stack* stack)
{
	return stack->array[stack->top];
}

void	peekall(struct Stack* stack)
{
	while (!isEmpty(stack))
	{
		printf("%i ", peek(stack));
		pop(stack);
	}
}

/*void	sa(struct Stack* stack)
{
	int	a;
	
	
	if (stack > 1)
		return ;
	else 
		push(stack, stack->array[stack->top-1]);
		pop((stack, stack->array[stack->top-2]);
}
*/
int main()
{
	struct Stack* sta = stack_a(100);
	int 	tre[9] = {12, 11, 14, 45, 23, 6, 65, 100};
	int	a = 0;

	while (tre[a] != '\0' )
	{
		push(sta, tre[a]);
		a++;
	}
	printf("%d popped from stack\n", pop(sta));
	peekall(sta);
	return 0;
}
