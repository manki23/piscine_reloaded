/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:48:39 by manki             #+#    #+#             */
/*   Updated: 2017/11/10 17:40:23 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUFF 1

int		main(int ac, char **av)
{
	int		fd;
	char	str[BUFF];

	ac--;
	av++;
	if (ac == 0)
		write(1, "File name missing.\n", 19);
	else if (ac > 1)
		write(1, "Too many arguments.\n", 20);
	else
	{
		if ((fd = open(av[0], O_RDWR)) == -1)
			return (-1);
		while (read(fd, str, BUFF) > 0)
			write(1, str, BUFF);
		close(fd);
	}
	return (0);
}
