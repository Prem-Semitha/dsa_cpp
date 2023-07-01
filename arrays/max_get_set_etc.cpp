#include<iostream>

using namespace std;

void display(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int get(int arr[],int index){
    if(index>=0 && index<=5){
        return arr[index];
    }
}
void set(int *arr,int index,int element){
    if(index>=0 && index<=5){
        arr[index]=element;
    }
}
int max(int arr[]){
    int temp=arr[0];
    for(int i=1;i<5;i++){
        if (temp<arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
int sum(int arr[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5};
    display(arr);
    //cout<<sum(arr);
    set(arr,3,9);
    cout<<endl;
    display(arr);
    return 0;
}