/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   choose_sorting.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 16:24:45 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/14 16:36:50 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "sorting.h"

static int	st_free_mstck(t_mstck **a, t_mstck **b)
{
	if (a == NULL)
	{
		if (b != NULL)
			ps_mstckclear(b);
	}
	else
	{
		ps_mstckclear(a);
		if (b != NULL)
			ps_mstckclear(b);
	}
	return (0);
}

static int	st_errormessage_mstck(t_mstck **a, t_mstck **b, char *mess, int fd)
{
	ft_putstr_fd(mess, fd);
	return (ps_free_mstck(a, b));
}

static int	quirkysorting(int argc, char *argv[])
{
	t_mstck	*aa;
	t_mstck	*bb;

	aa = ps_makemstck_int(argc, argv);
	bb = NULL;
	if (aa == NULL)
		return (st_errormessage_mstck(&aa, &bb, "Error\n", 2));
	else
		ps_quirkysort(&aa, &bb);
	if (aa != NULL)
		ps_mstckclear(&aa);
	if (bb != NULL)
		ps_mstckclear(&bb);
	return (1);
}

int	ps_sorting(int argc, char *argv[], t_stack **a)
{
	t_stack	*b;
	size_t	size_a;

	size_a = ps_stacksize(*a);
	b = NULL;
	if (issorted_des(*a) == -1)
	{
		if (size_a < 7)
			ps_smallsort(a, &b);
		else
			reverse_order_a(a, &b);
	}
	else
	{
		if (size_a < 7)
			ps_smallsort(a, &b);
		else
			return (quirkysorting(argc, argv));
	}
	if (b != NULL)
		ps_stackclear(&b);
	return (1);
}
