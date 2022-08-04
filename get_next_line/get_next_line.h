/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:53:10 by donkang           #+#    #+#             */
/*   Updated: 2022/08/04 20:53:13 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 5000
// # endif

char		*get_next_line(int fd);
char		*ft_readfile(int fd, char *res);
char		*ft_getline(char *buffer);
char		*ft_nextbuf(char *buffer);
char		*ft_joinfree(char *buffer, char *buf);

char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strchr(const char *string, int c);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strlen(const char *str);

#endif