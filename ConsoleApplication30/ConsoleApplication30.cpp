#include<stdio.h>

int GetDays(int month, int day) {
	int i = 0;
	int sum = 0;
	for (i = 1; i < month; i++) {
		if (i == 2) {
			sum += 28;
		}
		else if (i % 2 == 0) {
			sum += 30;
		}
		else {
			sum += 31;
		}
		


	}
	return sum + day;
}

	
	int main() {
		int month, day;
		scanf_s("%d %d", &month, &day);
		printf("1월1일부터 현재까지의 거리는 %d일 입니다", GetDays(month, day));

	}