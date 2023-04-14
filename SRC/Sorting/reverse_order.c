/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_order.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 11:42:34 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:42:53 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

/*This file contains the functions:
				-reverse_order_a(t_stack **a, t_stack **b)
 * reverse_order_a(t_stack **a, t_stack **b);
		This function reverses the order of elements in stack a.
		It only does this correctly if stack b is empty (*b = NULL).
 */

void	reverse_order_a(t_stack **a, t_stack **b)
{
	push_b_ntimes(a, b, ps_stacksize(*a));
	while (*b != NULL)
	{
		if ((*b)->next != NULL)
			rrotate_b(b);
		push_a(a, b);
	}
}
