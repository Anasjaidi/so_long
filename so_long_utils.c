/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 21:33:18 by ajaidi            #+#    #+#             */
/*   Updated: 2022/01/04 21:33:18 by ajaidi           ###   ########.fr       */
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
	map->x = 0;
	map->y = 0;
	map->in = 0;
}
