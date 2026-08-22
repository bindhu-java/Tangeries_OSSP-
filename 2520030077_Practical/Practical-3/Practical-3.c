#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    printf("Parent Process Started\n");
    printf("Parent PID: %d\n", getpid());
    printf("State: Running\n");

    pid = fork();

    if (pid < 0)
    {
        perror("fork failed");
    }

    if (pid == 0)
    {
        printf("\nChild Process\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        printf("State: Running\n");
      
        sleep(5);
      
        printf("State: Terminated\n");
    }
    else
    {
        printf("\nParent Process\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);
        printf("State: Waiting\n");

        wait(NULL);

        printf("Child process completed\n");
        printf("Parent State: Running\n");
    }
}
