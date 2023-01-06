#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int papers[], int papers_len, int K) {
    int length = papers_len;
    for(int i = 0; i < papers_len-1; i++){
    	K -= papers[i];
    	if(K < 0)
    		length = i;
    }
    return length;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�. �Ʒ����� �߸��� �κ��� ������ ���� �ڵ常 �����ϼ���.
int main() {
	int papers1[] = {2, 4, 3, 2, 1};
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int papers2[] = {2, 4, 3, 2, 1};
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
