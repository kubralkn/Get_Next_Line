/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalkan <kalkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:58:48 by kalkan            #+#    #+#             */
/*   Updated: 2024/12/06 15:29:27 by kalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

char	*ft_calloc(int count, int size);
char	*ft_strjoin(char *stash, char *buffer);
char	*get_next_line(int fd);
int		ft_strchr(const char *buffer);
int		ft_len(const char *stash);

#endif