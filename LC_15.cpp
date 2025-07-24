#include<iostream>
#include<vector>
using namespace std;
int main(){
    //LC_15 with hashing
    // vector<vector<int>> UniqueTriplets;
    // for(int i=0;i<n;i++){
    //     int a=-nums[i];
    //     Set<int>s;
    //     for(int j=0;j<n;j++){
    //         int c=a-nums[j];
    //         if(s.find(c)!=s.end()){
    //             vector<int> trip ={nums[i],nums[j],nums[k]};
    //             sort(trip.begin(),trip.end());
    //             UniqueTriplets.insert(trip);
    //         }
    //         s.insert(numsp[j]);

    //     }
    // }
    // return UniqueTriplets;

    //most optimized Code
    // vector<vector<int>> UniqueTriplets;
    // for(int i=0;i<n;i++){
    //     if(i>0 && nums[i]==nums[i-1]){
    //         continue;
    //     }
    //     int j=i+1;
    //     int k=n-1;
    //     while(j<k){
    //         int sum=nums[i]+nums[j]+nums[k];
    //         if(sum>0){
    //             k--;
    //         }else if(sum<0){
    //             j++;
    //         }else{
    //             UniqueTriplets.pushback(nums[i],nums[j],nums[k]);
    //         }
    //         j++;k--;
    //         while(j<k && nums[j]==nums[j-1])j++;
    //     }
    // }









    return 0;
}