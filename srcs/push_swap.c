/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:45:04 by Tamather          #+#    #+#             */
/*   Updated: 2021/10/10 05:59:43 by Tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	check_number(char **arg)
{
	int	i;
	int	j;

	i = 0;
	if (!arg[0])
		return (1);
	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (!(arg[i][j++] != '-' || j != 0) && !ft_isdigit(arg[i][j++]))
				return (1);
		}
		j = i + 1;
		while (arg[j])
			if (!ft_strncmp(arg[i], arg[j++], ft_strlen(arg[i])))
				return (1);
		i++;
	}
	return (0);
}

static int	*atabtoitab(char **atab, int *size)
{
	int	i;
	int	*itab;

	i = 0;
	while (atab[*size])
		(*size)++;
	itab = malloc(sizeof(int) * (*size));
	if (!itab)
		exit(1);
	ft_bzero(itab, i + 1);
	while (atab[i])
	{
		itab [i] = atoi(atab[i]);
		i++;
	}
	return (itab);
}

static void sort3(t_s *s)
{
	if (s->a[2] > s->a[0] && s->a[0] > s->a[1])
		sa(s);
	else if (s->a[0] > s->a[2] && s->a[2] > s->a[1])
		ra(s);
	else if (s->a[1] > s->a[0] && s->a[0] > s->a[2])
		rra(s);
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2])
	{
		sa(s);
		rra(s);
	}
	else if(s->a[0] < s->a[1] && s->a[1] > s->a[2])
	{
		sa(s);
		ra(s);
	}
	
}

void prints(int *a, int sizea)
{
	int i;

	i = 0;
	while (i < sizea)
	{
		ft_putnbr(a[i]);
		ft_putendl_fd("", 1);
		i++;
	}

}

int min_pos(int *t, int n)
{
	int i;
	int pos;
	int posnum;
	
	i = 0;
	posnum = t[0];
	pos = 0;
	while (i < n)
	{
		if(posnum > t[i])
		{
			posnum = t[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int seg_pos(int *t, int n, int seg)
{
	int i;
	int pos;
	
	i = 0;
	pos = 0;
	while (i < n)
	{
		if(seg > t[i] && )
			return (pos);
		i++;
	}
}

void	ascend_min_elem(int *t, int n)
{
	int pos;

	pos = min_pos(t, n);
	while(pos != 0)
	{
		if(pos > n / 2)
		{
			rro(t, n);
			ft_putendl_fd("rra", 1);
			pos++;
		}
		else
		{
			ro(t, n);
			ft_putendl_fd("ra", 1);

			pos--;
		}
		if(pos == n)
			pos = 0;
	}
}

void	ascend_seg_elem(int *t, int n, int seg)
{
	int pos;

	pos = seg_pos(t, n, seg);
	while(pos != 0)
	{
		if(pos > n / 2)
		{
			rro(t, n);
			ft_putendl_fd("rra", 1);
			pos++;
		}
		else
		{
			ro(t, n);
			ft_putendl_fd("ra", 1);

			pos--;
		}
		if(pos == n)
			pos = 0;
	}
}

void	sort5(t_s *s)
{
	while(s->sa > 3)
	{
		ascend_min_elem(s->a, s->sa);
		pb(s);
	}
	sort3(s);
	while(s->sb > 0)
		pa(s);
}

void sort_all(t_s *s)
{
	int seg;
	int i;

	seg = (s->sa / 20);
	i = 1;
	if(seg%20)
		seg++;
	while (i <= seg)
	{
		
	}
}

void	sort(t_s *s)
{
	if(s->sa == 2)
		sa(s);
	else if (s->sa == 3)
		sort3(s);
	else if(s->sa <= 5)
		sort5(s);
}

static int	check_tri(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			t = 1;
		i++;
	}
	if (!t)
		return (1);
	return (0);
}

int	main(int argc, char const **argv)
{
	t_s s;

	ft_bzero(&s, sizeof(t_s));
	(void)argc;
	if (check_number((char **)argv + 1))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	else
	{
		s.a = atabtoitab((char **)argv + 1, &s.sa);
		if (!check_tri(s.a, s.sa))
		{
			s.b = malloc(sizeof(int) * s.sa);
			if(!s.b)
				exit(1);
			sort(&s);
		}
		//prints(s.a, s.sa);
		//if (check_tri(s.a, s.sa))
		//	ft_putendl_fd("yes", 0);
		free(s.a);
		free(s.b);
	}
	return (0);
}
