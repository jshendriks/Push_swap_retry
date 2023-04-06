/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 18:07:19 by jhendrik      #+#    #+#                 */
/*   Updated: 2023/04/06 18:16:31 by jhendrik      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../../libft/libft.h"
# include "../types.h"
# include "../Operations/operations.h"
# include "../Utils/utils.h"

void	reverse_order_a(t_stack **a, t_stack **b);
/*Reverses the order of the given stack a.*/

void	ft_smallsort(t_stack **a, t_stack **b);
void	ft_two_asc_a(t_stack **a, t_stack **b);
void	ft_two_des_b(t_stack **a, t_stack **b);
void	ft_three_des_b(t_stack **a, t_stack **b);
void	ft_three_asc_a(t_stack **a, t_stack **b);
void	ft_four(t_stack **a, t_stack **b);
void	ft_five(t_stack **a, t_stack **b);
void	ft_six(t_stack **a, t_stack **b);

void	ft_quirkysort(t_mstck **a, t_mstck **b);

int		ft_sorting(int argc, char *argv[], t_stack **a);

#endif
