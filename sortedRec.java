import java.util.Scanner;

public class sortedRec {
    public static boolean isSorted(int[] arr, int n) {
        if(n <= 1) {
            return true;
        }
        return (arr[n - 1] >= arr[n - 2]) && isSorted(arr, n - 1);
    };
    public static boolean binary(int[] arr,int tar,int st,int end) {
        int mid = (st + end) / 2;
        if(st > end) {
            return false;
        }
        if(arr[mid]==tar){
            return true;
        }else if(arr[mid] < tar) {
            return binary(arr, tar, mid + 1, end);
        } else {
            return binary(arr, tar, st, mid - 1);
        }
        
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Array Checking");
        //int input = sc.nextInt();
        int[] arr = {1, 2, 3, 4, 5};
        int n = arr.length;
        System.out.println(isSorted(arr, n));
        System.out.println("Binary Search:"+binary(arr, 20, 0, n-1));
    }
}