#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    double num = sqrt(n);

    if (num == (int)num) answer = (num + 1) * (num + 1);
    else answer = -1;

    return answer;
}