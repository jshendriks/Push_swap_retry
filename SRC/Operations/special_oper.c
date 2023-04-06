/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   special_oper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/06 17:53:21 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/06 18:04:51 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "operations.h"

void	case_one(t_stack **a)
{
	rrotate_a(a);
	swap_a(a);
	rotate_a(a);
	swap_a(a);
	rrotate_a(a);
	swap_a(a);
	rrotate_a_ntimes(a, 2);
}

void	case_two(t_stack **a)
{
	rotate_a_ntimes(a, 2);
	swap_a(a);
	rrotate_a(a);
	swap_a(a);
	rotate_a(a);
	swap_a(a);
	rotate_a_ntimes(a, 2);
	swap_a(a);
	rotate_a_ntimes(a, 2);

}

void	case_three(t_stack **a)
{
	swap_a(a);
	rotate_a_ntimes(a, 2);
	swap_a(a);
	rotate_a(a);
}

void	case_four(t_stack **a)
{
	swap_a(a);
	rotate_a(a);
	swap_a(a);
	rrotate_a(a);
	swap_a(a);
	rrotate_a(a);
}

void	case_five(t_stack **a)
{
	swap_a(a);
	rrotate_a_ntimes(a, 2);
}
