#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr,int n,int m,int mid){
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=mid){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    if(painter>m){
            return false;
    }else{
            return true;
    }
}
int Painter(vector<int>&arr,int n,int m){
    int sum=0,maxm=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxm=max(maxm,arr[i]);
    }
    int st=maxm,end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int> arr={40,30,10,20};
    int n=4;
    int m=2;
    cout<<Painter(arr,n,m);

    return 0;
}