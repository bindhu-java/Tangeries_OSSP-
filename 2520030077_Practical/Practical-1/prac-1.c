#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    char buf[100];
    int pid;

    printf("Enter a Linux command: ");
    scanf("%s", buf);

    pid = fork();

    if (pid == 0)
    {
        printf("Child PID: %d\n", getpid());
        execlp(buf, buf, NULL);
    }
    else
    {
        printf("Parent PID: %d\n", getpid());
        wait(NULL);
        printf("Child process completed\n");
    }
}
