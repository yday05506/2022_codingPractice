#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int tile_length) {
    char* answer = (char*) malloc(sizeof(char) * (tile_length+1) );
    char com[6] = {'R','R','R','G','G','B'};
    if(tile_length%6 == 1 || tile_length%6 == 2 || tile_length%6 == 4 )
        strcpy(answer, "-1");
    else{
        for(int i = 0; i < tile_length; i++)
            answer[i] = com[i%6];
        answer[tile_length]='\0';
    }
    return answer;
}

/// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int tile_length1 = 11;
    char* ret1 = solution(tile_length1);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);
    
    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}
