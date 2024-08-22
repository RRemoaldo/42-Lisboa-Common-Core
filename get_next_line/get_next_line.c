/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:57:22 by rasoares          #+#    #+#             */
/*   Updated: 2024/08/22 14:00:20 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	char		*str;

	str = 0;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	while (*buffer || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		str = ft_strjoin(str, buffer);
		if (ft_newline(buffer, 0))
			break ;
	}
	return (str);
}