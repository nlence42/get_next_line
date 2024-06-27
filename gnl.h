#ifndef GNL_H
# define GNL_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *buffer, char *tmp);
char	*ft_get_line(char *buffer);
char	*ft_parse(char *buffer);
char	*ft_read(int fd, char *buffer);
char	*get_next_line(int fd);

#endif
