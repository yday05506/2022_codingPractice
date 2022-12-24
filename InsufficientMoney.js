function solution(price, money, count) {
    var addPrice = 0;
    
    for(let i = 1; i <= count; i++) {
        addPrice += price * i;
    }
    
    return money > addPrice ? 0 : addPrice - money;
}