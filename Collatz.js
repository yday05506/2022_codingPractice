function solution(num) {
    var answer = 0;
    let idx = 0;
    
    while(num != 1) {
        if(num % 2 == 0) {
            num = num / 2;
            idx++;
        }
        else if(num % 2 != 0) {
            num = (num * 3) + 1;
            idx++;
        }
    }
    if(idx >= 500) {
        idx = -1;
    }
    answer = idx;
    return answer;
}