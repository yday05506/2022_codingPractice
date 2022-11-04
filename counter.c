#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++) {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    if (general_counter < small_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}

int main() {
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}