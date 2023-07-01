#include<iostream>

using namespace std;

void display(int arr[]){
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int *arr1,int *arr2,int *arr3){
    int i=0,j=0,k=0;
    while(i<=4&&j<=4){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            k++;j++;
        }
        else{
            arr3[k]=arr1[j];
            k++;i++;
        }
    }
    for(;i<5;i++){
        arr3[k++]=arr1[i];
    }
    for(;j<5;j++){
        arr3[k++]=arr2[j];
    }
}
int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int arr3[11];
    merge(arr1,arr2,arr3);
    display(arr3);
    return 0;
}