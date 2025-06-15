import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println();
        //int input = sc.nextInt();
        String s1="ab";
        String s2="eidbaooo";
        int freq[]=new int [26];
        for(int i=0;i<s1.length();i++){
            freq[s1.charAt(i)-'a']++;
        }
        System.out.println(Arrays.toString(freq));
        System.out.println(s1.length());
    }
}