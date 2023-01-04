// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len, int cutline) {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int answer = 0;
    
    for(int i = 0; i < scores_len; i++) {
    	if(scores[i] >= cutline)
    		answer++;
	}
    
    return answer;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int scores[5] = {80, 90, 55, 60, 59};
    int scores_len = 5;
    int cutline = 60;
    int ret = solution(scores, scores_len, cutline);
    
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
