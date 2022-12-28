import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import java.util.stream.Collectors;

public class GymClothes2 {
    public int solution(int n, int[] lost, int[] reserve) {
        // 교집합 제거를 위한 교집합 생성
        Set<Integer> realReverse, realLost, retainSet;

        realReverse = Arrays.stream(reserve).boxed().collect(Collectors.toSet());
        realLost = Arrays.stream(lost).boxed().collect(Collectors.toSet());

        retainSet = new HashSet<>(realReverse);
        retainSet.retainAll(realLost);

        realReverse.removeAll(retainSet);
        realLost.removeAll(retainSet);

        for(int r : realReverse) {
            if(realLost.contains(r-1))
                realLost.remove(r-1);
            else if(realLost.contains(r+1))
                realLost.remove(r+1);
        }

        return n - realLost.size();
    }
}
