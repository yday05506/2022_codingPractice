// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) {
    // 여기에 코드를 작성해주세요.
    int* answer;
    answer = (int*)malloc(sizeof(int)*score_len);
    
    for(int i = 0; i < score_len; i++) {
    	answer[i] = 1;
    	for(int j = 0; j < score_len; j++) {
    		if(score[i] < score[j]) answer[i]++;
		}
	}
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int score1[] = {90, 87, 87, 23, 35, 28, 12, 46};
    int score_len1 = 8;
    int *ret1 = solution(score1, score_len1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < score_len1; i++){
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }
    printf("} 입니다.\n");
    
    int score2[] = {10, 20, 20, 30};
    int score_len2 = 4;
    int *ret2 = solution(score2, score_len2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < score_len2; i++){
        if (i != 0)
            printf(", ");
        printf("%d", ret2[i]);
    }
    printf("} 입니다.\n");
}
