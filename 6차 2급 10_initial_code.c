#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    for(int i = 0; i < boxes_len; i++)
    	if(boxes[i]*0.9 <= weight || boxes[i]*1.1 >= weight)
    		answer++;
    	
    return answer;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int weight = 600;
    int boxes[5] = {653, 670, 533, 540, 660};
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);
    
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
