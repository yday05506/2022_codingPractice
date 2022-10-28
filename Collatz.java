public class Collatz {
    public int solution(int num) {
        int answer = 0;
        long n = num;
        int cnt = 0;

        while(n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
                cnt++;
            }
            else {
                n = (n * 3) + 1;
                cnt++;
            }
            if (cnt >= 500) {
                cnt = -1;
                break;
            }
        }

        answer = cnt;

        return answer;
    }
}
