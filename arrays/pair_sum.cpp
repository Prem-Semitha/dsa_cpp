#include<iostream>

using namespace std;
void pair_sum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"the pair sum are "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

void pair_sum_hash(int arr[],int n,int sum){
    int max=arr[0];int low =arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(low>arr[i]){
            low=arr[i];
        }
    }
    int h[max];

    for(int i=0;i<max-1;i++){
        h[i]=0;
    }
    // for(int i=0;i<max;i++){
    //     h[arr[i]]++;
    // }
    for(int i=0;i<max-1;i++){
        if(h[sum-arr[i]] !=0){
            cout<<"the pair sum are "<<arr[i]<<" "<<sum-arr[i]<<endl;
        }
        h[arr[i]]++;
    }
}
void sorted_sum_pair(int arr[],int n,int sum){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout<<"the pair sum are "<<arr[i]<<" "<<arr[j]<<endl;
            i++;j--;
        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
}
int main(){
    //int arr[10]={6,3,8,10,16,7,5,2,9,14};
    int arr[10]={1,3,4,5,6,8,9,10,12,14};
    sorted_sum_pair(arr,10,7);
    return 0;
}