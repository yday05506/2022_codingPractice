function solution(n) {
    var answer = 0;
    
    str = n.toString();
    arr = str.split("");
    sortedArr = arr.sort((a, b) => b-a);
    sortedStr = sortedArr.join("");
    return parseInt(sortedStr);
    
    return answer;
}