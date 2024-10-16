#include<stdio.h>
int Recursive(int n) {
	if (n <= 1) {
		return 100;
	}
	return (Recursive(n-1)*2)-50;
}

int main() {
	int n = 10;
	int ander = 1072;
	int result;

	for (int i = 1; i < 11; i++) {
		result=Recursive(i);
		printf("Å’á’À‹à : %d\n", ander);
		printf("Ä‹A“I‚È’À‹à‘ÌŒn : %d\n\n", result);
		ander += 1072;
	}
	return(0);
}

