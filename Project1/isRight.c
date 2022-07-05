#include"isRight.h"
int isRight(int number,int answer) {
	if (number == answer) {
		return 1;
	}
	else if (number > answer) {
		printf("high!\n");
		return 0;
	}
	else {
		printf("low!\n");
		return 0;
	}
}