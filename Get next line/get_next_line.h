/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:03:57 by pterekho          #+#    #+#             */
/*   Updated: 2024/02/17 13:42:17 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *line1, char *buff);
char	*ft_join(char *line1, char *buff);
char	*ft_strchr(char *s, int c);
char	*define_line(char *str);
char	*ft_leftovers(char *text);
char	*ft_load_static(int fd, char *text);
char	*get_next_line(int fd);

#endif
