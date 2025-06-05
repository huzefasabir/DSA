#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
void selection(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
void insertion(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr ){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
int main(){
    vector <int> arr={1,3,4,6,2,8,5};
    int n=7;
    //bubble(arr,n);
    //selection(arr,n);
    insertion(arr,n);
    return 0;
}