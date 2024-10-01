#include <stdio.h>
#include<iostream>
#include<Windows.h>
int main() {

	//コンソールで文字化けを防ぐ
	SetConsoleOutputCP(65001);
	char str[] = "ア";
	printf("%s", str);

	return 0;

}