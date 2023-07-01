#include<iostream>

using namespace std;

int ncr(int n,int r){
    if(r==n || r==0){
        return 1;
    }
    else{
        return ncr(n-1,r-1)+ncr(n-1,r);
    }
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<< ncr(n,r)<<endl;
    return 0;
}