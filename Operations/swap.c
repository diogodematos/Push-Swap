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
	struct Stack* sa = (struct Stack*)malloc(sizeof(struct Stack));
	sa->capacity = capacity;
	sa->top = -1;
	sa->array = (int*)malloc(sa->capacity * sizeof(int));
	return sa;
}

struct Stack	*stack_b(unsigned capacity)
{
	struct Stack* sb = (struct Stack*)malloc(sizeof(struct Stack));
	sb->capacity = capacity;
	sb->top = -1;
	sb->array = (int*)malloc(sb->capacity * sizeof(int));
	return sb;
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

int main()
{
	struct Stack* sa = stack_a(100);
	int 	tre[6] = {12, 11, 14, 45, 23, 56};
	int	a = 0;

	while (tre[a])
	{
		push(sa, tre[a]);
		a++;
	}
	printf("%d popped from stack\n", pop(sa));
	peekall(sa);
	return 0;
}
