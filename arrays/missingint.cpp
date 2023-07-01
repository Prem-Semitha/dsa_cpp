#include<iostream>

using namespace std;

int missing_num(int arr[],int n){
    int sum=0,total=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    total=n*(n+1)/2;
    return total-sum;
}
int missing_num2(int arr[],int n){
    int i=0;
    int diff=arr[0];
    int var=arr[0];
    for(int i=0;i<n;i++){
        if(diff != arr[i]-i){
            return i+diff;
        }
    }
    return 0;
}

void missing_mul(int arr[],int n){
    int diff=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-i !=diff){
            while(diff<arr[i]-i){
                cout<<diff+i<<endl;
                diff++;
            }
        }
    }
}

void missing_mul2(int arr[],int n){
    int high=arr[n-1];
    int low=arr[0];
    int arr2[high];
    for(int i=0;i<high;i++){
        arr2[i]=0;
    }
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }
    for(int i=low;i<high;i++){
        if(arr2[i]==0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int arr[8]={11,12,13,14,15,16,19,20};
    missing_mul2(arr,8);
    return 0;
}