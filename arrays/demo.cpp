

#include<iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> myVector ;

  myVector.push_back(1);
  myVector.push_back(2);
  myVector.push_back(3);
  myVector.push_back(4);
  myVector.push_back(5);
  myVector.push_back(6);
  myVector.push_back(7);
   for(auto i:myVector){
    cout<<i<<" ";
  }
  cout<<endl;
  myVector.insert(myVector.begin(),(myVector.end()-1),myVector.end());
  myVector.erase(myVector.end()-1);
  for(auto i:myVector){
    cout<<i<<" ";
  }
  return 0;
  
}
