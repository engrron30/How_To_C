#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SUCCESS 0
#define FAILURE -1

int press_F_to_next(void) {
	char ch;

	printf("----Press [F] to Continue----");
	fflush(stdout);
	ch = getchar();
	
	if (ch == 'F') {
		printf("\r\033[K");
		fflush(stdout);
		return SUCCESS;
	} else {
		printf("Terminating the program...\n");
		sleep(2);
		printf("Thank you for playing!\n");
		return FAILURE;
	}
}

int main() {
	system("head -n 1 main_func_narr.dat");
	if (press_F_to_next() != SUCCESS)
		return -1;
	
	char user_ans[1000];

	return 0;

}
