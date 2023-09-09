/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:21:44 by jchau             #+#    #+#             */
/*   Updated: 2023/09/09 11:21:46 by jchau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	every_if(int aa, int bb, int cc, int ll)
{
	if ((aa == '1' && bb == '1') || (aa == ll && bb == '1'))
	{
		ft_putchar('A');
	}
	else if ((aa == '1' && bb == cc) || (aa == ll && bb == cc))
	{
		ft_putchar('C');
	}
	else if (aa > '1' && aa < ll && bb > '1' && bb < cc)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;
	int	a;
	int	b;

	a = '1';
	l = x;
	c = y;
	while (a <= x)
	{
		b = '1';
		while (b <= y)
		{
			every_if(a, b, c, l);
			b++;
		}
		a++;
		write(1, "\n", 1);
	}
}
