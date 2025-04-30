
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
};
/*
1
23
456
78910*/
void P10(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
};
/*
1
121
12321
1234321*/
void P11(){
    int n=4;
    int num;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<k;
        }
        for(int m=i;m>0;m--){
            cout<<m;
        }
        cout<<endl;
    }
};
void P12(){
    int n=4;
    //TOP
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int k=0;k<2*i-1;k++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    //BOTTOM
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int k=0;k<2*(n-i)-5;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
};
void P13(){
    int n=4;
    // //TOP
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=0;k<2*(n-i-1);k++){
    //         cout<<" ";
    //     }
    //     for(int m=0;m<=i;m++){
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    //BOTTOM
    for(int i=n-1;i<=0;i--){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout<<" ";
        }
        for(int m=0;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
};
int main(){
    //P1();
    //P2();
    //P3();
    //P4();
    //P5();
    //P6();
    //P7();
    //P8();
    //P9();
    //P10();
    //P11();
    //P12();
    P13();
    return 0;
}