#include<iostream>

using namespace std;
void dupli(int arr[],int n){
    int lastDuplicate=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate){
            cout<<arr[i]<<endl;
            lastDuplicate=arr[i];
        }
    }
}
void no_dupli(int arr[],int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            j=i+1;
            while(arr[j]==arr[i]){
                j++;
                
            }
            cout<<arr[i]<<" is apperaing "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
}

void dupli_has(int arr[],int n){
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
        if(arr2[i]>1){
            cout<<i<<" are repeated "<<arr2[i]<<" times "<<endl;
        }
    }
}

void dupli_unorder(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i] != -1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            if(count >1){
                cout<<arr[i]<<" is repeated "<<count<<endl;
            }
        }
    }
}
int main(){
    //int arr[10]={3,6,8,8,10,12,15,15,15,20};
    int arr[10]={8,3,6,4,6,5,6,8,2,7};
    //dupli_has(arr,10);
    dupli_unorder(arr,10);

    return 0;
}