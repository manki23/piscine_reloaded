/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:55:12 by manki             #+#    #+#             */
/*   Updated: 2017/11/07 08:33:45 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = ac - 1;
	while (j > 1)
	{
		i = 1;
		while (i < j)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				av[0] = av[i];
				av[i] = av[i + 1];
				av[i + 1] = av[0];
			}
			i++;
		}
		j--;
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
	return (0);
}
