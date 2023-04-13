/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_smallsort.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 11:37:48 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/13 11:33:24 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

void	ft_smallsort(t_stack **a, t_stack **b)
{
	const t_stckfnc	jmptbl[] = {
		NULL,
		NULL,
		&ft_two_asc_a,
		&ft_three_asc_a,
		&ft_four,
		&ft_five,
		&ft_six
	};
	int				index;

	if (a != NULL && b != NULL)
	{
		if (*b == NULL && *a != NULL)
		{
			index = (int)ft_stacksize(*a);
			if (index > 1)
				jmptbl[index](a, b);
		}
	}
}
