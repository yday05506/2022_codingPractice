#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int count = 0;
    while(number > 0){
        int n = number % 10;
        if (n == 2 || n == 3 || n == 5 || n == 7)
            count += 1;
        number /= 10;
    }
    return count;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. main�Լ��� �߸��� �κ��� ������, solution�Լ��� �����ϼ���.
int main() {
    int number = 29022531;
    int ret = solution(number);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
