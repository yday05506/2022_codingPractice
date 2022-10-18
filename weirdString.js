function solution(s) {
    var answer = '';
    let str = [];
    str = s.split("");
    let idx = 0;
    
    for(let i = 0; i < s.length; i++) {
        if(s[i] === " ") 
            idx = 0;
        else if(idx % 2 == 0) {
            str[i] = s[i].toUpperCase();
            idx++;
        }
        else if(idx % 2 != 0) {
            str[i] = s[i].toLowerCase();
            idx++;
        }
        answer += str[i];
    }
    return answer;
}