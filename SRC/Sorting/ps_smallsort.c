/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_smallsort.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 11:37:48 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:41:44 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

void	ps_smallsort(t_stack **a, t_stack **b)
{
	const t_stckfnc	jmptbl[] = {
		NULL,
		NULL,
		&ps_two_asc_a,
		&ps_three_asc_a,
		&ps_four,
		&ps_five,
		&ps_six
	};
	int				index;

	if (a != NULL && b != NULL)
	{
		if (*b == NULL && *a != NULL)
		{
			index = (int)ps_stacksize(*a);
			if (index > 1)
				jmptbl[index](a, b);
		}
	}
}
