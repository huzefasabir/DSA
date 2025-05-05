#include<iostream>
#include<vector>
using namespace std;
void Maximun_Subarray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int c_sum=0;
        for(int i=0;i<nums.size();i++){
            c_sum+=nums[i];
            maxSum=max(c_sum,maxSum);
            if(c_sum<0){
                c_sum=0 ;
            }
        }
        return maxSum;
}
int main(){
    vector<int> nums={1,2,3-,5,2,-1};
    Maximun_Subarray(vector<int>& nums);
    return 0;
}