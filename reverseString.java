import java.util.Scanner;

public class reverseString{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println();
        //int input = sc.nextInt();
        char chars[]={'a','a','b','b','c','c','c'};
        int idx=0;
        for(int i=0;i<chars.length;i++){
            char curr=chars[i];
            int count=1;
            i++;
            while(i<chars.length && chars[i]==curr){
                count++;
                i++;
            }
            if(count==1){
                chars[idx++]=curr;
            }else{
                chars[idx++]=curr;
                String str=String.valueOf(count);
                for(int j=0;j<str.length();j++){
                    chars[idx++]=str.charAt(j);
                }
            }
            i--;
        }

    }
}