#include <stdio.h>

void ifDemo() {
	int input = 0;
	printf("Join Google\n");
	printf("Enter an integer: ");
	scanf("%d", &input);
	if (input == 1) {
		printf("You entered 1\n");
	} else {
		printf("You entered 0\n");
	}
}

void loopDemo() {
	int line = 0;
	while (line < 20000) {
		printf("%d\n", line);
		line++;
	}

	if (line >= 20000) {
		printf("Good!");
	} else {
		printf("继续加油!");
	}
}

int main() {
	ifDemo();
	loopDemo();

	return 0;
}
