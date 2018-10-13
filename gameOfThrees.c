#include <stdio.h>
#include <stdlib.h>

int addOrSubtract(int num);

int main(int argc, char **argv) {
	int num = atoi(argv[1]);
	if (argc != 2 || !num) {
		printf("%s\n", "Usage:");
		printf("%s\n", "    ./gameOfThrees <input number>");
		printf("%s\n", "Example:");
		printf("%s\n", "    ./gameOfThrees 100");
		exit(0);
	}
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
