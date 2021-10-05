#include <stdio.h>
#include <fcntl.h>
#include<stdlib.h>


char buf2[] = "Hello World!";

int main()
{
    int fd,i;

    if ((fd = creat("file.hole",O_RDWR)) < 0)
        printf("creat error");


    if (lseek(fd, 100, SEEK_SET) == -1)
        printf("lseek error");
    /* offset now = 100 */

for(i=0;i<5;i++)
{
    if (write(fd, buf2, 12) != 12)
        printf("buf2 write error");
    /* offset now = 160 */
}
    exit(0);
}

