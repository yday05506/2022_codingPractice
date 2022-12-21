function solution(a, b) {
    var answer = 0;
    let n = a.length;
    
    for(let i = 0; i < n; i++) {
        answer += a[i]*b[i];
    }
    
    return answer;
}