/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:09:55 by ajaidi            #+#    #+#             */
/*   Updated: 2022/01/05 18:09:56 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	reset_map(t_map *map)
{
	map->c = 0;
	map->e = 0;
	map->h = 0;
	map->w = 0;
	map->p = 0;
}

int	main(int ac, char **av)
{
	t_map	map;

	reset_map(&map);
	if (ac == 2)
		read_line(av[1], &map);
}
