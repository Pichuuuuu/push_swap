/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:16:00 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/20 18:26:29 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

# define A 1
# define B 2
# define AB 3

typedef struct s_s
{
	int	*a;
	int	*b;
	int	*c;
	int	sa;
	int	sb;
	int	sc;
	int	size;
}t_s;

void		sa(t_s *s);
void		sb(t_s *s);
void		ss(t_s *s);
void		pa(t_s *s);
void		pb(t_s *s);
void		ra(t_s *s);
void		rb(t_s *s);
void		rr(t_s *s);
void		rra(t_s *s);
void		rrb(t_s *s);
void		rrr(t_s *s);
void		pu(int *t, int *n, int *td, int *nd);
void		sw(int *a, int sizea);
void		ro(int *t, int n);
void		rro(int *t, int n);
int			check_number(char **arg);
int			*atabtoitab(char **atab, int *size);
void		prints(int *a, int sizea);
void		sort5(t_s *s);
void		sort3(t_s *s);
int			min_pos(int *t, int n);
int			max_pos(int *t, int n);
int			seg_pos(t_s *s, int seg, int size);
void		ft_swap(int *a, int *b);
void		quick_sort(int *tab, int first, int last);
void		ascend_elem(int *t, int n, int pos, int m);
void		sort_all(t_s *s);
int			find_element(int *t, int elem);
void		ascend_elem(int *t, int n, int pos, int m);

#endif