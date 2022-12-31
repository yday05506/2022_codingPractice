function solution(nums) {
    var answer = 0;
    let kind = nums.length/2;
    
    // 중복 제거
    let arr = nums.filter((element, index) => {
        return nums.indexOf(element) === index;
    });
    
    if(arr.length >= kind) 
        answer = kind;
    else answer = arr.length;
    
    return answer;
}