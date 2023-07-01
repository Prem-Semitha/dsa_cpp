#include<iostream>

using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int main(){
    int r=fact(4);
    cout<<r<<endl;

    return 0;
}