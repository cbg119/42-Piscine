/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:54:18 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/07 16:57:56 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int result;

	result = 0;
	while (str[result])
		result++;
	return (result);
}

void	write_error(int error, char *file)
{
	write(2, "cat: ", 5);
	write(2, file, ft_strlen(file));
	if (error == ENOENT)
		write(2, ": No such file or directory\n", 28);
	else if (error == EISDIR)
		write(2, ": Is a directory\n", 17);
}

void	write_from_term(void)
{
	char input_char;

	while (read(0, &input_char, 1))
		write(1, &input_char, 1);
}

void	display(int argc, char **argv)
{
	int		fd;
	int		counter;
	int		j;
	char	buffer[4096];

	counter = 1;
	while (counter < argc)
	{
		fd = open(argv[counter], O_RDWR);
		if (fd < 0 & errno != 13)
		{
			write_error(errno, argv[counter]);
			counter++;
			continue ;
		}
		if (fd < 0 && errno == 13)
			fd = open(argv[counter], O_RDONLY);
		while ((j = read(fd, buffer, 4096)))
		{
			buffer[j] = '\0';
			write(1, buffer, j);
		}
		close(fd);
		counter++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write_from_term();
	else
		display(argc, argv);
	return (0);
}
