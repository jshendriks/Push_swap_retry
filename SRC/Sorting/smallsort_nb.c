/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   smallsort_nb.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:01:56 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:43:45 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

void	ps_four(t_stack **a, t_stack **b)
{
	if (a != NULL && b != NULL)
	{
		if ((*a) != NULL && (*b) == NULL)
		{
			if (ps_stacksize(*a) == 4)
			{

				push_b_ntimes(a, b, 1);
				if (issorted_asc(*a) == 0)
					ps_three_asc_a(a, b);
				merge(a, b, 1); 
			}
		}
	}
}

void	ps_six(t_stack **a, t_stack **b)
{
	if (a != NULL && b != NULL)
	{
		if ((*a) != NULL && (*b) == NULL)
		{
			if (ps_stacksize(*a) == 6)
			{
				push_b_ntimes(a, b, 3);
				if (issorted_asc(*a) == 0)
					ps_three_asc_a(a, b);
				if (issorted_des(*b) == 0)
					ps_three_des_b(a, b);
				merge(a, b, 3);
			}
		}
	}
}
