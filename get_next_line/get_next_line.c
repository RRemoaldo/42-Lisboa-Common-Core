/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:57:22 by rasoares          #+#    #+#             */
/*   Updated: 2024/10/28 17:57:01 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buff[BUFFER_SIZE + 1];
	int			i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 1 || fd >= FOPEN_MAX)
	{
		while (buff[i])
			buff[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (*buff || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (newline(buff) == 1)
			break ;
	}
	return (line);
}
/* int	main()
{
	int fd = open("texto.txt", O_RDONLY);
	char *str;
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	return (0);
}  */
