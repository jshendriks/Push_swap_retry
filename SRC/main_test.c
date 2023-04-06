/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/06 17:18:00 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/06 17:35:09 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "src.h"

static int	ft_printfnode(t_stack *node)
{
	int	wrt;

	if (node != NULL)
		wrt = ft_printf("Node: %p, %L, %i, %p \n", node->prev, node->index, node->content, node->next);
	else
		wrt = ft_printf("NULL\n");
	return (wrt);
}

static int	ft_printfstack(t_stack *stck)
{
	t_stack	*tmp;
	int		i;
	int		wrt;
	int		rtn;

	tmp = stck;
	i = 0;
	rtn = 0;
	if (stck == NULL)
		rtn = ft_printf("NULL\n");
	else
	{
		while (tmp != NULL)
		{
			wrt = ft_printf("Node %i: %p, %L, %i, %p", i, tmp->prev, tmp->index, tmp->content, tmp->next);
			if (wrt == -1)
				return (-1);
			wrt = ft_printf("\t Own ptr: %p\n", tmp);
			if (wrt == -1)
				return (-1);
			rtn += wrt;
			tmp = tmp->next;
			i++;
		}
	}
	return (rtn);
}

static int	ft_free(t_stack **a, t_stack **b)
{
	if (a == NULL)
	{
		if (b != NULL)
			ft_stackclear(b);
	}
	else
	{
		ft_stackclear(a);
		if (b != NULL)
			ft_stackclear(b);
	}
	return (0);
}

static int	ft_errormessage(t_stack **a, t_stack **b, char *mess, int fd)
{
	ft_putstr_fd(mess, fd);
	return (ft_free(a, b));
}

static int	after_first_check(int argc, char *argv[])
{
	t_stack	*tmpa;
	t_stack	*tmpb;
	int		rtn;

	tmpa = ft_makestack_int(argc, argv);
	tmpb = NULL;
	if (tmpa == NULL)
		return (ft_errormessage(&tmpa, &tmpb, "Error\n", 2));
	if (check_doubles(tmpa) == 1)
	{
		rtn = 6;
		ft_printf("Input: %i\n", rtn);
		ft_printfstack(tmpa);
		ft_printf("Max node: \n");
		ft_printfnode(ft_nth_max(tmpa, (size_t)rtn));
		ft_printf("Min node: \n");
		ft_printfnode(ft_nth_min(tmpa, (size_t)rtn));
		return (1);
	}
	else
		return (ft_errormessage(&tmpa, &tmpb, "Error\n", 2));
}

int	main(int argc, char *argv[])
{
	t_stack	*tmpa;
	t_stack	*tmpb;
	int		rtn;

	tmpa = NULL;
	tmpb = NULL;
	if (argc > 1)
	{
		if (check_input_nums(argc, argv) == 1)
		{
			rtn = after_first_check(argc, argv);
			return (rtn);
		}
		else
			return (ft_errormessage(&tmpa, &tmpb, "Error\n", 2));
	}
	return (0);
}
