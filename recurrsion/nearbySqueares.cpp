#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int bestDivission(int index,int sum_b,int sum_c,int arr[],int n){
  if(index==n){
    
    return abs(sum_c*sum_c - sum_b*sum_b);
  }


  return min(bestDivission(index+1,sum_b+arr[index],sum_c,arr,n),bestDivission(index+1,sum_b,sum_c+arr[index],arr,n));

}

int main(){
  int arr[]={4,5,10,3};

  int sum_b=0;
  int sum_c=0;

  int result=bestDivission(0,sum_b,sum_c,arr,4);

  cout<<result<<endl;

  return 0;
}