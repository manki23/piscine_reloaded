/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:30:35 by manki             #+#    #+#             */
/*   Updated: 2017/11/07 10:34:50 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		result;
	int		i;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}
