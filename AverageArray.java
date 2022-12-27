import java.util.Arrays;

public class AverageArray {
    public double solution(int[] numbers) {
        double answer = 0;

        answer = Arrays.stream(numbers).average().orElse(0);

        return answer;
    }
}