/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_rotate_mstck.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:34:33 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:20:43 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "operations.h"

/*This file contains the functions:
			-rotate(t_stack **a)
			-ps_rotate_ab(t_stack **a, t_stack **b)
			-rotate_a(t_stack **a)
			-rotate_b(t_stack **b)
			-rotate_ab(t_stack **a, t_stack **b)
 *rotate(t_stack **a):
		This function shipss every element of stack 
		pointed to by *a up by one.
		The first element becomes the last element.
		If *a is NULL, or the stack contains one node,
		the function does not do anything.
		*a should point to the beginning of the stack.
 *ps_rotate_ab(t_stack **a, t_stack **b):
		This function shipss every element of the stacks
		pointed to by *a and *b up by one, 
		by calling the function rotate().
 *rotate_a(t_stack **a):
		Calls rotate(a) and prints message.
 *rotate_b(t_stack **b):
 		Calls rotate(b) and prints message.
 *rotate_ab(t_stack **a, t_stack **b):
 		Calls ps_rotate_ab(a,b) and prints message.
 */

static void	rotate_mstck(t_mstck **a)
{
	t_mstck	*first;
	t_mstck	*last;

	if (*a != NULL)
	{
		first = *a;
		if (first->next != NULL)
		{
			last = ps_mstcklast(*a);
			*a = first->next;
			(*a)->prev = NULL;
			last->next = first;
			first->prev = last;
			first->next = NULL;
			ps_mstck_indexing(*a);
		}
	}
}

static void	ps_rotate_ab(t_mstck **a, t_mstck **b)
{
	rotate_mstck(a);
	rotate_mstck(b);
}

void	rotate_a_mstck(t_mstck **a)
{
	rotate_mstck(a);
	ft_printf("ra\n");
}

void	rotate_b_mstck(t_mstck **b)
{
	rotate_mstck(b);
	ft_printf("rb\n");
}

void	rotate_ab_mstck(t_mstck **a, t_mstck **b)
{
	ps_rotate_ab(a, b);
	ft_printf("rr\n");
}
