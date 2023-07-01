#include<iostream>

using namespace std;

int binary_sea(int arr[],int key){
    int l=0,h=5;
    while(l<=h){
        int mid=(l+h)/2;
         if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            l=mid+1;
        }
       
        
        else{
            h=mid-1;
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cout<<"Enter the key";
    cin>>key;
    int l=0,h=4;
    int result=binary_sea(arr,key);
    cout<<"element present at "<<result;
    return 0;
}