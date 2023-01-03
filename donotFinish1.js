function solution(participant, completion) {
    var answer = '';
    let hashed = [];
    
    participant.forEach(player => {
        hashed[player] = hashed[player] ? hashed[player] + 1 : 1;
    })
    
    completion.forEach(player => {
        hashed[player] = hashed[player] - 1;
    })
    
    for(var key in hashed) {
        if(hashed[key] >= 1) answer = key;
    }
    
    
    return answer;
}