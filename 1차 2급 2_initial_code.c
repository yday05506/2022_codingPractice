// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
    // Write code here.
    int answer = 0;
    
//    if(grade == "S") answer = price * 0.95;
//    else if(grade == "G") answer = price * 0.9;
//    else if(grade == "V") answer = price * 0.85;
    
    
    switch(grade[0]) {
    	case 'S': 
			answer = price * 0.95;
			break;
    	case 'G': 
			answer = price * 0.9;
			break;
    	case 'V': 
			answer = price * 0.85;
			break;
	}
    
    return answer;
}

// The following is main function to output testcase.
int main() {
    int price1 = 2500;
    char* grade1 = "V";
    int ret1 = solution(price1, grade1);
    
    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret1);
    
    int price2 = 96900;
    char* grade2 = "S";
    int ret2 = solution(price2, grade2);
    
    // Press Run button to receive output. 
    printf("Solution: return value of the function is %d .\n", ret2);
}
