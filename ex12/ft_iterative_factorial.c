/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:17:29 by manki             #+#    #+#             */
/*   Updated: 2017/11/06 15:26:17 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	if ((nb >= 0) && (nb <= 12))
	{
		while (++i <= nb)
			result *= i;
		return (result);
	}
	else
		return (0);
}
