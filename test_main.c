#include "get_next_line.h"

// void fun(int fd)
// {
//     static int count = 0;
//     ft_putnbr_fd(count, fd);
//     count++;
// }

int	main(void)
{
    int fd = open("/home/dima/42london/get_next_line/poem.txt", O_RDWR);
    char * next_line;
    int i = 0;

	if (fd == -1) 
	{
        perror("Error opening file");
        return 1;
	}
    while (i < 10)
    {
        next_line = get_next_line(fd);
        printf("%s \n", next_line);
        free(next_line);
        i++;
    }
    close(fd);
    return 0;
}
