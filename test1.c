#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){

    int fd = open("nonexist.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("err no = %d\n",fd);
        perror("main");
    }


    return 0;
}