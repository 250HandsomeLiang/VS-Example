#include"makeNumber.h"
#include<math.h>
#include<time.h>
testNumber = 11;
void Print() {
	number = 66;
	printf("%d", number);
}
int makeNumber() {
	int answer;
	srand(time(NULL));
	answer = rand() % Max + 1;
	return answer;
}