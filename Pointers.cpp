#include<iostream>
using namespace std;
void changeA(int a){
    a=20;
}
void change(int *ptr){//passing by reference (pointers method)
    *ptr=20;
}
void chang(int & b){//Passing by referencing (alias method)&b os the alias i=of the variable A
    b=30;
}
int main(){
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    changeA(a);
    cout<<a<<"Pass by value"<<endl;
    change(&a);//Passign the actual address of a
    cout<<a<<"passing by reference (pointers method)"<<endl;
    chang(a);
    cout<<a<<"Passing by referencing (alias method)"<<endl;

    return 0;
}