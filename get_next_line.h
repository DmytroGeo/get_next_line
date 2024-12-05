/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <dgeorgiy@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:14:33 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/12/05 12:21:26 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>
# include <fcntl.h>

char	*read_and_append(int fd, char **str, char *buffer);
char	*finalise_line(char *str, char *buffer);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	buffer_fill(char *buffer, int fd, ssize_t bytes_read);

size_t	ft_strlen(const char *s);

#endif
