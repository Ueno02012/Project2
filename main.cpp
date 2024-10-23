#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<functional>


typedef void(*PFunc)(int*);

void setTimeOut(PFunc P, int second) {
	Sleep(second *= 600);
	P(&second);
}

//コールバック関数
void DispResult(int* s) {}

int main() {

	int playerNumber = 0;
	printf("半だったら0,丁だったら1と入力\n");
	printf("半or丁 : ");
	scanf_s("%d", &playerNumber);
	printf("\n");


	std::function<void(void)>tyohan = [=]()
		{
			int dice = rand() % 6 + 1;

			int answer;
			answer = dice % 2;
			if (answer == playerNumber) {
				printf("dice=%d\n", dice);
				printf("正解\n");
			}
			else {
				printf("dice=%d\n", dice);
				printf("不正解\n");
			}
		};
	PFunc p;

	p = DispResult;

	setTimeOut(p, 3);//3 4 5 6

	tyohan();

	return 0;
}