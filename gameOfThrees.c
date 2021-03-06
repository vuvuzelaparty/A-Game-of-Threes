#include <stdio.h>
#include <stdlib.h>

int addOrSubtract(int);

int main(int argc, char **argv) {
	if (argc != 2 || atoi(argv[1]) < 1) {
		printf("%s\n%s\n%s\n%s\n", "Usage:", "    ./gameOfThrees <input number greater than 0>", "Example:", "    ./gameOfThrees 100");
		exit(1);
	}
	int num = atoi(argv[1]);
	while (num > 1) {
		printf("%d %d\n", num, addOrSubtract(num));
		num = (num + addOrSubtract(num))/3;
	}
	printf("%d\n", num);
	return 0;
}

int addOrSubtract(int num) {
	if (!((num + 1) % 3))
		return 1;
	else if (!((num - 1) % 3))
		return -1;
	else
		return 0;
}
