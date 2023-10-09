#include<iostream>

using namespace std;

void display(int arr[]){
    for(int i=0;i<2;i++){
        cout<<arr[i]<<" ";
    }
}

void uni(int *arr1,int *arr2,int *arr3){
    int i=0,j=0,k=0;
    // int arr1[]={1,2,3,4,5};
    // int arr2[]={2,4,6,8,10};
    while(i<5&&j<5){
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];

        }
        else if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i++];
            j++;
        }
        else if(arr2[j]>arr1[i]){
            arr3[k++]=arr1[i++];

        }
    }
    for(;i<5;i++){
        arr3[k++]=arr1[i];
    }
    for(;j<5;j++){
        arr3[k++]=arr2[j];
    }

}

void intersection(int *arr1,int *arr2,int *arr3){
    int i=0,j=0,k=0;
    // int arr1[]={1,2,3,4,5};
    // int arr2[]={2,4,6,8,10};
    while(i<5&&j<5){
        if(arr1[i]>arr2[j]){
            j++;

        }
        else if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i++];
            j++;
        }
        else{
            i++;

        }
    }
    // for(;i<5;i++){
    //     arr3[k++]=arr1[i];
    // }
    // for(;j<5;j++){
    //     arr3[k++]=arr2[j];
    //}
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,4,6,8,10};
    int arr3[11];
    // intersection(arr1,arr2,arr3);
    uni(arr1,arr2,arr3);
    display(arr3);
    return 0;
}