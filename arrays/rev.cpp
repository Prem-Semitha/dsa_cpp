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
void rev(int *arr){
    for(int i=0,j=4;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[5];
    rev(arr);
    display(arr);
    return 0;
}