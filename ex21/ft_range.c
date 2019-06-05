/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 08:58:07 by manki             #+#    #+#             */
/*   Updated: 2017/11/07 09:06:13 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	else if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	else
	{
		i = 0;
		while (i < (max - min))
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}
