#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd1,fd2;
    size_t n;
    char buf[100];

    fd1=open("b2",O_RDWR);
    fd2=open("c2",O_WRONLY|O_CREAT,0666);

    while((n=read(fd1,buf,sizeof(buf)))>0)
        write(fd2,buf,n);

    close(fd1);
    close(fd2);

    printf("copied contents of b2 to c2\n");
}
