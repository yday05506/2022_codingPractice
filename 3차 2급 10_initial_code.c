#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++) 
        for (int j = 0; j < arr_len-1; j++) 
            if (arr[i]%2 == 0 && arr[i]/2 == arr[j]) {
                answer++;
                continue;
            }
    return answer;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
int main() {
    int arr[] = {4, 8, 3, 6, 7};
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
