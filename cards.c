#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len) {
	int answer = 0;
	int cnt[3] = { 0, };

	for (int i = 0; i < cards_len; i++) {
		if (strcmp(cards[i][0], "blue") == 0) cnt[0]++;
		else if (strcmp(cards[i][0], "red") == 0) cnt[1]++;
		else if (strcmp(cards[i][0], "black") == 0) cnt[2]++;

		answer += atoi(cards[i][1]);
	}

	for (int i = 0; i < 3; i++) {
		if (cnt[i] == 3) {
			answer *= 3;
			break;
		}
		else if (cnt[i] == 2) {
			answer *= 2;
			break;
		}
	}

	return answer;
}

int main() {
	char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
	int cards_len1 = 3;
	int ret1 = solution(cards1, cards_len1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
	int cards_len2 = 3;
	int ret2 = solution(cards2, cards_len2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}