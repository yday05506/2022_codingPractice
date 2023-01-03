// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* words[], int words_len, char* word) {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int count = 0;
    
    for(int i = 0; i < words_len; i++) {
    	char* w = words[i];
    	for(int j = 0; j < strlen(word); j++) {
    		if(w[j] != word[j]) 
    			count++;
		}
	}
    
    return count;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    char* words[3] = {"CODE", "COED", "CDEO"};
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);
    
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
