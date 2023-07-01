#include<iostream>

using namespace std;
void display(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insert(int *arr,int x){
    int i=4;
    while(arr[i]>x){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
}
int issorted(int arr[]){
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
void rearange(int *arr){
    int i=0,j=4;
    while(i<j){
        while(i<0){
            i++;
        }
        while(j>=0){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[]={-1,3,-14,53,999};

    // insert(arr,2);
    // display(arr);
    // cout<<issorted(arr);
    rearange(arr);
    display(arr);
    return 0;
}