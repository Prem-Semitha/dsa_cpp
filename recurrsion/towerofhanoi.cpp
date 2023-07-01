#include<iostream>

using namespace std;
void towerofhanoi(int n,int a,int b,int c){
    if(n>0){
        towerofhanoi(n-1,a,c,b);
        cout<<"move from tower "<<a<<" to "<<c<<endl;
        towerofhanoi(n-1,b,a,c);
    }
}
int main(){
    int n;
    cin>>n;
    int a=1,b=2,c=3;
    towerofhanoi(n,1,2,3);
    return 0;
}