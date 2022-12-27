import java.util.Arrays;

class overlapNum {
    public int solution(int[] array, int n) {
        int answer = 0;

        answer = (int)Arrays.stream(array).filter(a->a==n).count();

        return answer;
    }
}
