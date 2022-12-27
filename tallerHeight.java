import java.util.Arrays;

class tallerHeight {
    public int solution(int[] array, int height) {
        int answer = 0;

        answer = (int)Arrays.stream(array).filter(a->height<a).count();

        return answer;
    }
}