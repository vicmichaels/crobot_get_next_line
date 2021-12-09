#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include    <fcntl.h>
# include    <stdlib.h>
# include    <unistd.h>

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_isnewline(char *str);
char	*free_smth(char *str);
char	*ft_getline(char *memory);
char	*ft_freememory(char *memory);
char	*get_next_line(int fd);

#endif