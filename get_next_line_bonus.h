/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:15:08 by njerasea          #+#    #+#             */
/*   Updated: 2022/08/19 16:00:54 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_readtojoin(int fd, char *buffer);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen_end(const char *s, char end);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_read(char *buffer, size_t lenline);

#endif
