#include<iostream>
#include<string>
using namespace std;

void IsPalindrome(string str){
    string newstr=str;
    cout<<newstr;
    // reverse(newstr.begin(),newstr.end());
    // if(newstr==str){
    //     return true;
    // }else{
    //     return false;
    // }

}

string reverse(string str){
    int st=0;
    int end=str.length()-1;
    while(st<=end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}
int main(){
    string str="I am coding";
    // cout<<reverse(str);
    cout<<IsPalindrome(str);
    return 0;
}