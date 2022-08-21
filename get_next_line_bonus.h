/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:49:44 by njerasea          #+#    #+#             */
/*   Updated: 2022/08/21 23:07:02 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
