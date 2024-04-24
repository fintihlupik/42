/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:58:55 by pterekho          #+#    #+#             */
/*   Updated: 2024/02/17 14:03:19 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_load_static(int fd, char *text)
{
	char	*buff;
	int		answer;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	answer = 1;
	while (!ft_strchr(text, '\n') && answer)
	{
		answer = read(fd, buff, BUFFER_SIZE);
		if (answer == -1)
		{
			free(buff);
			free(text);
			return (NULL);
		}
		buff[answer] = '\0';
		text = ft_strjoin(text, buff);
	}
	free (buff);
	return (text);
}

char	*define_line(char *text)
{
	int		i;
	char	*line;

	i = 0;
	if (!text || !text[i])
		return (NULL);
	while (text[i] != '\n' && text[i])
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (text[i] != '\n' && text[i])
	{
		line[i] = text[i];
		i++;
	}
	if (text[i] == '\n')
	{
		line[i] = text[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_leftovers(char *text)
{
	int		i;
	int		j;
	char	*new_text;

	i = 0;
	if (!text)
		return (NULL);
	while (text[i] && text[i] != '\n')
		i++;
	if (!text[i])
	{
		free(text);
		return (NULL);
	}
	new_text = (char *)malloc(sizeof(char) * (ft_strlen(text) - i + 1));
	if (!new_text)
		return (NULL);
	j = 0;
	i++;
	while (text[i])
		new_text[j++] = text[i++];
	new_text[j] = '\0';
	free(text);
	return (new_text);
}

char	*get_next_line(int fd)
{
	static char	*text;
	char		*line;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	text = ft_load_static(fd, text);
	if (!text)
		return (NULL);
	line = define_line(text);
	text = ft_leftovers(text);
	return (line);
}
