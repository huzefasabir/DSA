#include<iostream>
using namespace std;
double myPow(double x, int n) {
    long binary_form=n;
    if(n==0){
        return 1;
    }else if(x==0){
        return 0;
    }
    if(n<0){
        x=1/x;
        binary_form=-binary_form;
    }
    double ans=1;
    while(binary_form>0){
        if(binary_form %2==1){
            ans*=x;
        }
        x*=x;
        binary_form/=2;
    }
    return ans;
    
};
int main(){
    double ans =myPow(3,5);
    cout<<ans;
    return 0;
}