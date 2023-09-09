/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboughan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:13:08 by fboughan          #+#    #+#             */
/*   Updated: 2023/09/09 20:13:11 by fboughan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char a);

void	every_if(int aa, int bb, int cc, int ll)
{
	if ((aa < '2' && bb < '2') || (aa > ll - 1 && bb < '2'))
	{
		ft_putchar('o');
	}
	else if ((aa < '2' && bb > cc - 1) || (aa == ll && bb == cc))
	{
		ft_putchar('o');
	}
	else if ((aa < ll && bb == '1') || (aa > '1' && bb == cc))
	{
		ft_putchar('|');
	}
	else if (aa > '1' && aa < ll && bb > '1' && bb < cc)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('-');
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
		ft_putchar('\n');
	}
}
