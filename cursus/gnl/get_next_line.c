/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:14:32 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/07/15 18:24:04 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char	*_set_line(char *line);
static char	*ft_strchr(char *s, int c);

char	*get_next_line(int fd)
{
	static char	*left_c;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(left_c);
		free(buffer);
		left_c = NULL;
		buffer = NULL;
		return (0);
	}
	if (!buffer)
		return (NULL);
	line = _fill_line_buffer(fd, left_c, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	left_c = _set_line(line);
	return (line);
}

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(left_c);
			return (0);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!left_c)
			left_c = ft_strdup("");
		tmp = left_c;
		left_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

static char	*_set_line(char *line_buffer)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0)
		return (0);
	left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	line_buffer[i + 1] = 0;
	return (left_c);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			x;

	x = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == x)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == x)
		return ((char *) &s[i]);
	return (NULL);
}

int main (void)
{
	int fd;
	char *text = get_next_line(fd);
	
	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error de apertura");
		return (1);
	}
	
	while ((text = get_next_line(fd)) != NULL)
	{
		printf("%s", get_next_line(fd));
		free(text);
		text = NULL;
	}
	close(fd);
	return(0);
}