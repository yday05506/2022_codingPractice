import java.util.Arrays;

public class reverse {
    public String solution(String s) {
        String answer = "";

        char[] arr = s.toCharArray();
        Arrays.sort(arr);

        return new StringBuilder(new String(arr)).reverse().toString();
    }
}
