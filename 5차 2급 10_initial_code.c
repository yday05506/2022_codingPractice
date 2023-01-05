// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int time_table[], int time_table_len, int n) {
    int answer = 0;
	int* arr = (int*)malloc(sizeof(int)*n);
    int cnt = 0;
    
    for(int i = 0; i < time_table_len; i++) {
    	arr[i] = 0;
	}
	
	for(int i = 0; i < time_table_len; i++) {
		arr[cnt] += time_table[i];
		cnt++;
			
		if(cnt == n) cnt = 0;
	}
	
	for(int i = 0; i < n; i++) {
		if(answer < arr[i]) answer = arr[i];
	}
	
    return answer;
}
// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int time_table1[] = {1, 5, 1, 9};
    int time_table_len1 = 4;
    int n1 = 3;
    int ret1 = solution(time_table1, time_table_len1, n1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
    
    int time_table2[] = {4, 8, 2, 5, 4, 6, 7};
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
