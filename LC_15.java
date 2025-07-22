import java.util.Scanner;

public class LC_15{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        //System.out.println();
        //int input = sc.nextInt();

        // This commented code block is a brute force approach to solving the three sum problem.
        // The problem involves finding all unique triplets in an array that sum up to a specific target value (in this case, the target value is 0).
        //Brute Force Approach
//         class Solution {
//     public List<List<Integer>> threeSum(int[] nums) {
//         List<List<Integer>> ans= new ArrayList<>();
//         Set<List<Integer>> set = new HashSet<>();
//         int n=nums.length;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         List<Integer> cur=Arrays.asList(nums[i],nums[j],nums[k]);
//                         Collections.sort(cur);
//                         if(set.contains(cur) ==false){
//                             set.add(cur);
//                             ans.add(cur);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
        
//     }
// }
    //Better Approach
    

    }
}