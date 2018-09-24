#include <iostream>

using namespace std;
//for sum of even nos
int sumEven(int a,int b){
    //define variables
    int p,q;int c=0;
    //condition for greater
    if(a<b){p=a;q=b;}
    else{p=b;q=a;}
    //sum by using loop
    for(int n=p-(p%2)+2;n<q;n=n+2){c=c+n;}
    
    return c;
}
//sum of odd nos
int sumOdd(int f,int e){
    //define variables
    int r,s;int d=0;
    //condition for greater
    if(f<e){r=f;s=e;}
    else{r=e;s=f;}
    //sum by using loop
    for(int i=r+(r%2)+1;i<s;i=i+2){d=d+i;}
    return d;
}  
//sum of sqre of odd nos
int sumSqrOdd(int g,int h){
    //define variables
    int t,u;int v=0;
    //condition for greater
    if(g<h){t=g;u=h;}
    else{t=h;u=g;}
    //sum by using loop
    for(int i=t+1+(t%2);i<u;i=i+2){v =v+(i*i);}
    return v;
}
//sum sqr of even nos
int sumSqrEven(int j,int k){
    //define variables
    int w,x;int y=0;
    //condition for greater
    if(j<k){w=j;x=k;}
    else{x=j;w=k;}
    //sum using loop
    for(int i=w+2-(w%2);i<x;i=i+2){y=y+(i*i);}
    return y;
}
int main(){
    //define variables
    int aa,bb;
    //ask the user the inputs
    cout<<"Give the values. "<<endl;
    cin>>aa>>bb;
    cout<<"The sum of even nos is "<<sumEven(aa,bb)<<endl;
    cout<<"The sum of odd nos is "<<sumOdd(aa,bb)<<endl;
    cout<<"The sum of spre of odd nos "<<sumSqrOdd(aa,bb)<<endl;
    cout<<"The sum of sqre of even nos "<<sumSqrEven(aa,bb)<<endl;
    return 0;
}

