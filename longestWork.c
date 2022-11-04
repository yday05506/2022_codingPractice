#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int time_table[], int time_table_len, int n) {
	int answer = 0;
	int* arr = (int*)malloc(sizeof(int) * n);
	int cnt = 0;


	for (int i = 0; i < time_table_len; i++) {
		arr[cnt] += time_table[i];
		cnt++;

		if (cnt == n) cnt = 0;
	}

	for (int i = 0; i < n; i++) {
		if (answer < arr[i]) answer = arr[i];
	}

	return answer;
}

nt main() {
	int time_table1[] = { 1, 5, 1, 9 };
	int time_table_len1 = 4;
	int n1 = 3;
	int ret1 = solution(time_table1, time_table_len1, n1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
	int time_table_len2 = 7;
	int n2 = 4;
	int ret2 = solution(time_table2, time_table_len2, n2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}