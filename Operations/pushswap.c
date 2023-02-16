/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:28:03 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/02/14 11:36:17 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

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
