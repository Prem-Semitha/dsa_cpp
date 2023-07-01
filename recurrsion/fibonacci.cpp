#include<iostream>

using namespace std;
int fib(int n){
    int t0=0,t1=1,s=0;
    if(n<=1){
        return n;
    }
    else{
        for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
        }
       

    }
     return s;

}
int rfib(int n){
    if(n<=1){
        return n;
    }
    else{
        return rfib(n-1)+rfib(n-2);
    }
}
int f[10];
int mfib(int n){//memoisation
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1){
            f[n-2]=mfib(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=mfib(n-1);
        }
        return mfib(n-2)+mfib(n-1);
    }
    // return mfib(n-2)+mfib(n-1);
}
int main(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        f[i]=-1;
    }
    cout<<rfib(n)<<endl;
    return 0;
}