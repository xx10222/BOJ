import java.util.Arrays;
import java.util.Scanner;

public class boj2512 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int answer=0;
        int n = sc.nextInt();
        int[] budgets = new int[n];
        for(int i=0;i<n;i++) {
            budgets[i] = sc.nextInt();
        }
        int m = sc.nextInt();

        Arrays.sort(budgets);
        int low = 0;
        int high = budgets[n-1];

        int mid = 0;
        while(low<=high) {
            long sum = 0;
            mid = (low+high)/2;

            for(int budget : budgets) {
                if(mid < budget) {
                    sum += mid;
                } else {
                    sum += budget;
                }
            }

            if(sum>m) { //예산 초과
                high = mid-1;
            } else {
                low = mid+1;
                answer = mid;
            }
        }
        System.out.println(answer);
    }
}
