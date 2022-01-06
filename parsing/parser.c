/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:18 by ajaidi            #+#    #+#             */
/*   Updated: 2022/01/03 13:56:23 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_one(char *line1, char *line2)
{
	int	i;

	i = 0;
	while (line1[i + 1] && line2[i + 1])
	{
		if (line1[i] != '1' || line2[i] != '1')
			return (print_error(3));
		i++;
	}
	return (0);
}

int	check_map(t_map *map, t_list **root)
{
	if (!map->c || !map->e || !map->p)
		return (print_error(5));
	return (check_one((*root)->content, ft_lstlast(*root)->content));
}

char	*read_line(char *path, t_map *map)
{
	char	*line;
	t_list	*root;
	int		fd;
	int		error;

	fd = open(path, O_RDWR);
	line = get_next_line(fd);
	root = NULL;
	if (!line)
		print_error(1);
	while (line)
	{
		error = check_line(line, map, &root);
		if (error)
			exit(0);
		line = get_next_line(fd);
	}
	if (check_map(map, &root))
		exit(0);
	while (root)
	{
		printf("%s", (char *)root->content);
		root = root->next;
	}
	return (NULL);
}
