package codingTest;

import java.util.*;

class Ponkemon {
    public int solution(int[] nums) {
        int answer = 0;
        int kind = nums.length/2;

        // 중복 제거
        HashSet<Integer> numsSet = new HashSet<>();
        for(int num : nums)
            numsSet.add(num);

        // 중복을 제거한 set의 크기가 크면 kind를, 아니면 크기를 리턴
        if(numsSet.size() > kind)
            answer = kind;
        else answer = numsSet.size();

        return answer;
    }
}
