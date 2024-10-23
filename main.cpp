#include <stdio.h>
#include<iostream>
#include<Windows.h>

int Recursive(int n) {
	if (n <= 1) {
		return 100;
	}
	return (n * Recursive(n-1));
}

int main() {

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int n = 100;
	int result;
	result = Recursive(n);
	printf("%dの階乗=\n", result);
	return(0);


}