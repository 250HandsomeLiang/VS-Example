#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"guess.h"
void test() {
	printf("hello world");
	printf("OK");
	printf("YYY");
};
int main() {
	printf("hello world\n");
	int number;
	int answer = makeNumber();
	while (scanf(" %d", &number) != -1) {
		if (isRight(number, answer)) {
			printf("Right!\n");
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}