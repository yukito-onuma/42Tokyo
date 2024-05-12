/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:11:42 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/12 21:02:46 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*result;
	static char	save[BUFFER_SIZE + 1];
	char		buffer[BUFFER_SIZE + 1];
	int			num;
	int			i;

	if (fd < 0)
		return (NULL);
	while (1)
	{
		num = (int)read(fd, buffer, BUFFER_SIZE);
		if (num <= 0 || BUFFER_SIZE <= 0)
			return (NULL);
		i = 0;
		while (i < num)
		{
			printf("buffer[%d] : %c\n", i, buffer[i]);
			if (buffer[i] == '\n')
			{
				ft_memcpy(save, buffer, i + 1);
				save[i + 1] = '\0';
				printf("save1 : %s\n", save);
				result = ft_strjoin(result, save);
				ft_memcpy(save, buffer + i + 1, num - i - 1);
				printf("save2 : %s\n", save);
				printf("result : %s\n", result);
				return (result);
			}
			i++;
			printf("%d\n", i);
		}
		result = ft_strdup(buffer);
	}
	ft_putstr(result);
}

int	main(void)
{
	char 	*file_name = "test.txt";
	int 	fd;
	char	*result;

	fd = open(file_name, O_RDONLY);
	printf("fd : %d\n", fd);
	result = get_next_line(fd);
	printf("MainResult : %s\n", result);
	get_next_line(fd);
	result = get_next_line(fd);
	printf("MainResult : %s\n", result);
}
