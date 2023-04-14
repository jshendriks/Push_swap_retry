/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 12:43:16 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:24:52 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "operations.h"

/*This file contains the functions:
				-swap_a(t_stack **a)
				-swap_b(t_stack **b)
				-swap_ab(t_stack **a, t_stack **b)
 *swap_a(t_stack **a):
 		Calls ft_swap(a) and prints message.
 *swap_b(t_stack **b):
 		Calls ft_swap(b) and prints message.
 *swap_ab(t_stack **a, t_stack **b)
 		Calls ft_swap_ab() and prints message.
 */

void	swap_a(t_stack **a)
{
	ps_swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack **b)
{
	ps_swap(b);
	ft_printf("sb\n");
}

void	swap_ab(t_stack **a, t_stack **b)
{
	ps_swap_ab(a, b);
	ft_printf("ss\n");
}
