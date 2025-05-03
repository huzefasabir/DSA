#include<iostream>
#include<vector>//Header file for vector
using namespace std;

int main(){
    // int size=5;
    // int marks[size]={11,12,1,14,15};
    // double price[10]={5,12,203.6};
    // //cout<<price[1];
    // //cout<<sizeof(marks);
    // int small=100;// INT_MAX not functional
    // for(int i=0;i<size;i++){
    //     //
    //     small=min(marks[i],small);
    // }
    
    // //int answer=smallest(marks,size);
    // cout<<small;



    vector<int> vec1;
    vector<int> vec ={1,2,3};
    vector<int> vec2(3,0); //vec2(size of vec,value at each index)
    cout<<vec[0];
    //for each loop
    for(int i:vec){
        cout<<i;
    }
    //Vector Functions
    cout<<vec.size();// size of vector
    vec.push_back(25);//25 is push in vector
    vec.pop_back();// removing the last index of the vector
    vec.front;//front value
    vec.back;//last ondex value
    vec.at(1);//prints the value at 1 st index




    return 0;
}