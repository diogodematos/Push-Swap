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
	t_stack	stack_a;
	t_stack	stack_b;

    if (argc < 2)
		return (0);
	if (argc == 2)
    {
        ft_pssplit(&stack_a, &stack_b, argv);
    }  
	else
	{	
		int	num;
		int	a;

		num = 0;
		a = 0;
		stack_a.stack = calloc((argc-1), sizeof(int));
		stack_b.stack = calloc((argc-1), sizeof(int));
		stack_a.size = argc - 1;
		stack_b.size = 0;
		while (a < stack_a.size)
		{
			num = atoi(argv[a+1]);
			stack_a.stack[a] = num;
			a++;
		}
	}
    if (stack_a.size == 1)
    {
		ft_free(&stack_a, &stack_b);
        return (0);
    }
    print_stacks(stack_a, stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
    pa(&stack_a, &stack_b);
	printf("jsh\n");
	print_stacks(stack_a, stack_b);
	ft_free(&stack_a, &stack_b);
    return (0);
}
