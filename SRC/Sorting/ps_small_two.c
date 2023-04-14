/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_small_two.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 09:37:00 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:41:02 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

void	ps_two_asc_a(t_stack **a, t_stack **b)
{
	if (a != NULL && b != NULL)
	{
		if ((*a) != NULL)
		{
			if (ps_stacksize(*a) == 2)
			{
				if ((*a)->content > ((*a)->next)->content)
					swap_a(a);
			}
		}
	}
}

void	ps_two_des_b(t_stack **a, t_stack **b)
{
	if (a != NULL && b != NULL)
	{
		if ((*b) != NULL)
		{
			if (ps_stacksize(*b) == 2)
			{
				if ((*b)->content < ((*b)->next)->content)
					swap_b(b);
			}
		}
	}
}
