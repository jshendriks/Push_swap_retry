/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   quirky_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 13:56:43 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:42:40 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

static void	mapping_to_b(t_mstck **a, t_mstck **b)
{
	size_t	sizea;

	push_b_ntimes_mstck(a, b, 2);
	sizea = ps_mstcksize(*a);
	while (sizea > 1)
	{
		set_markszero(a);
		set_mapszero(a);
		ps_calcmaps(a, b);
		ps_markbest(a);
		exec_best(a, b);
		sizea = ps_mstcksize(*a);
	}
}

static void	max_ontop(t_mstck **b)
{
	t_mstck	*max;
	size_t	sizeb;

	sizeb = ps_mstcksize(*b);
	max = ps_mstckmax(*b);
	if (max->index != 0)
	{
		if (max->index < (sizeb / 2))
			rotate_b_ntimes_mstck(b, max->index);
		else
			rrotate_b_ntimes_mstck(b, sizeb - (max->index));
	}
}

static void	back_to_a(t_mstck **a, t_mstck **b)
{
	t_mstck	*nodeb;
	t_mstck	*rema;

	max_ontop(b);
	nodeb = *b;
	rema = *a;
	while (nodeb)
	{
		if (nodeb->content > rema->content)
		{
			push_a_mstck(a, b);
			nodeb = *b;
		}
		else
			nodeb = NULL;
	}
	rrotate_a_mstck(a);
	nodeb = *b;
	while (nodeb)
	{
		push_a_mstck(a, b);
		nodeb = *b;
	}
}

void	ps_quirkysort(t_mstck **a, t_mstck **b)
{
	if (a != NULL && b != NULL)
	{
		if (*a != NULL && *b == NULL)
		{
			mapping_to_b(a, b);
			back_to_a(a, b);
		}
	}
}
