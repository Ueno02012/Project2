#include<stdio.h>
int Recursive(int n) {
	if (n <= 1) {
		return 100;
	}
	return (n * Recursive(n - 1));
}

int main() {
	int n = 100;
	int result;
	result = Recursive(n);
	printf("%d�̊K��=%d\n",n, result);
	return(0);



}

