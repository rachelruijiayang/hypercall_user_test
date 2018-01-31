#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
    printf("starting test program\n");
    int i;
    for (i = 0; i < 100; i++) {
		printf("called syscall\n");
        long int ret_status = syscall(332);
        // long ret_status = 1;
		printf("syscall returned %ld; sleep 1 sec\n", ret_status);
        sleep(1);
	}
    return 0;
}
