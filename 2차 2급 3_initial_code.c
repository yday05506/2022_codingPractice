// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int N, int M) {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int answer = 0;
    
    for(int i = N; i <= M; i++) {
    	if(i % 2 == 0) answer += i*i;
	}
    
    return answer;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int N = 4;
    int M = 7;
    int ret = solution(N, M);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}


