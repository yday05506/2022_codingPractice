#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int point) {
    if (point < 1000)
        return 0;
    return point * 100 % 10000;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� �ڵ��Դϴ�. �Ʒ����� �߸��� �κ��� ������, ���� �ڵ常 �����ϼ���.
int main() {
    int point = 2323;
    int ret = solution(point);
    
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
