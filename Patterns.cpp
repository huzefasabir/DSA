
#include<iostream>
using namespace std;
/* 
Pattern is:- P1
123
123
123
where n=3
*/
void P1(){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
};
/*
123
456
789
where n=3
*/
void P2(){
    int n=4;
    int num=1;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
};
/*
*
**
***
****
*/
void P3(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
};
/*
1
22
333
4444
*/
void P4(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
/*
p5
A
BB
CCC
DDDD
*/
void P5(){
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
};
/*
1
12
123
1234
*/
void P6(){
    int n=4;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
};
/*
1
21
321
4321
*/
void P7(){
    int n=4;
    
    for(int i=1;i<=n;i++){
        int num=i;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
};
/*
1111
222
33
4
*/
void P8(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
/*
1111
 222
  33
   4
*/
void P9(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<"  ";
        }
        for(int j=i;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //P1();
    //P2();
    //P3();
    //P4();
    //P5();
    //P6();
    //P7();
    //P8();
    P9();
    return 0;
}