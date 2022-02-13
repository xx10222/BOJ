import java.util.*;


public class boj1920 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []a = new int[n];
        for(int i=0;i<n;i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a); //이분탐색을 위한 정렬

        int m = sc.nextInt();
        int numArr[] = new int[m];
        for(int i=0;i<m;i++) {
            numArr[i]= sc.nextInt();
        }

        for(int num : numArr) {
            binarySearch(a, num);
        }
    }

    public static void binarySearch(int[] a, int num) {
        int lo = 0;
        int hi = a.length-1;
        int mid = 0;

        while(lo<=hi) {
            mid = (lo+hi)/2;
            if(a[mid]==num) {
                System.out.println(1);
                return;
            } else if(a[mid]>num) {
                hi = mid-1;
            } else if(a[mid]<num) {
                lo = mid+1;
            }
        }
        System.out.println(0);
        return;
    }
}
