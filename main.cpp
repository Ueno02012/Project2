#include <stdio.h>
#include<iostream>
#include<Windows.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}
	return (n * 2 - 50);
}

int main() {

	SetConsoleCP(65001);
	int n = 100;
	int result;

	result = Recursive(n);
	printf("%dの階乗=%d", n, result);
	return(0);


}