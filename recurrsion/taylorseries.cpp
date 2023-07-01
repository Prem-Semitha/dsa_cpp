#include<iostream>

using namespace std;
// for this method the order is n^2.
// double e(int x ,int n){  
//     static double p=1,f=1;
//     double r;
//     if(n==0){
//         return 1;

//     }
//     else{
//         r=e(x,n-1);
//         f=f*n;
//         p=p*x;
//         return r+p/f;
//     }
// }

//THIS IS AN FOR LOOP APPROACH

// double e2(int x,int n){
//      double s;
//     for(;n>0;n--){
//         s=1+x*s/n;
//     }
//     return s;
// }

//THIS IS HORNEY METHOD

double e3(int x,int n){
    static double s;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return e3(x,n-1);
    }
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<e3(x,n);
    return 0;
}