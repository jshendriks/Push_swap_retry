/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_five.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/06 17:43:55 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:39:30 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

static void	case_six(t_stack **a)
{
	swap_a(a);
	rrotate_a_ntimes(a, 2);
	swap_a(a);
}

static void	sorting_five_first(t_stack **a)
{
	t_stack	*max;
	t_stack	*min;

	max = ps_max(*a);
	min = ps_min(*a);
	if (max->index == 4 && min->index == 2)
		case_one(a);
	else if (max->index == 4 && min->index == 3)
		case_two(a);
	else if (max->index == 3 && min->index == 2)
		case_three(a);
	else if (max->index == 3 && min->index == 4)
		case_four(a);
	else if (max->index == 2 && min->index == 3)
		case_five(a);
	else if (max->index == 2 && min->index == 4)
		case_six(a);
}

static void	sorting_five_second(t_stack **a, t_stack **b)
{
	t_stack	*max;
	t_stack	*min;

	max = ps_max(*a);
	min = ps_min(*a);
	if (max->index == 4 && min->index == 3)
	{
		push_b_ntimes(a, b, 2);
		if (issorted_asc(*a) == 0)
			ps_three_asc_a(a, b);
		if (issorted_des(*b) == 0)
			ps_two_des_b(a, b);
		merge(a, b, 2);
	}
	else
	{
		swap_a(a);
		sorting_five_first(a);
	}

}

static void	sorting_five_else(t_stack **a, t_stack **b)
{
	push_b_ntimes(a, b, 2);
	if (issorted_asc(*a) == 0)
		ps_three_asc_a(a, b);
	if (issorted_des(*b) == 0)
		ps_two_des_b(a, b);
	merge(a, b, 2);
}

void	ps_five(t_stack **a, t_stack **b)
{
	t_stack	*node1;
	t_stack	*node2;

	if (a != NULL && b != NULL)
	{
		if ((*a) != NULL && (*b) == NULL)
		{
			if (ps_stacksize(*a) == 5)
			{
				node1 = ps_nth_max(*a, 2);
				node2 = ps_nth_max(*a, 3);
				if (node1->index == 0 && node2->index == 1)
					sorting_five_first(a);
				else if (node1->index == 1 && node2->index == 0)
					sorting_five_second(a, b);
				else
					sorting_five_else(a, b);
			}
		}
	}
}
