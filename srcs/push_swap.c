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
			if (!ft_isdigit(arg[i][j++]))
				return (1);
		j = i + 1;
		while (arg[j])
			if (!ft_strncmp(arg[i], arg[j++], 10))
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
		swap(s, A);
	else if (s->a[0] > s->a[2] && s->a[2] > s->a[1])
		rotate(s, A);
	else if (s->a[1] > s->a[0] && s->a[0] > s->a[2])
		rrotate(s, A);
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2])
	{
		swap(s, A);
		rrotate(s, A);
	}
	else if(s->a[0] < s->a[1] && s->a[1] > s->a[2])
	{
		swap(s, A);
		rotate(s, A);
	}
	else
	{
		ft_putendl_fd("nop", 0);
	}
	
}

void prints(int *a, int sizea)
{
	int i;

	i = 0;
	while (i < sizea)
	{
		ft_putnbr(a[i]);
		ft_putendl_fd("", 0);
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
	while (i < n)
	{
		if(posnum < t[i])
		{
			posnum = t[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	ascend_min_elem(int *t, int n)
{
	int pos;

	pos = min_pos(t, n);
	ft_putnbr(pos);
	while(pos != 0)
	{
		if(pos > n / 2)
		{
			rro(t, n);
			pos++;
		}
		else
		{
			ro(t, n);
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
		push(s, B);
	}
	sort3(s);
	while(s->sb > 0)
	{
		ft_putnbr(s->sb);
		push(s, A);
	}
}

void	sort(t_s *s)
{
	if(s->sa == 2)
		swap(s, A);
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
		prints(s.a, s.sa);
		if (check_tri(s.a, s.sa))
			ft_putendl_fd("yes", 0);
		free(s.a);
		free(s.b);
	}
	return (0);
}
