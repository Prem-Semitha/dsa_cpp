#include<iostream>

using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int pow2(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow2(m*m,n/2);
    }
    else{
        return pow2(m*m,(n-1)/2)*m;
    }

}

int main(){
    int r=pow2(3,4);
    cout<<r<<endl;
    return 0;
}