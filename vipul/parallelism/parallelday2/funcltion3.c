#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Process ID: %d\n", getpid());
    printf("Parent Process ID: %d\n", getppid());
    printf("Real User ID: %d\n", getuid());
    printf("Effective User ID: %d\n", geteuid());
    printf("Fork id :....%d\n",fork());
    
    return 0;
}
 
