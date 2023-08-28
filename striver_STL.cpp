#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

int main(){
    // pair<int,int > p={1,3};
    // cout<<p.first<<" "<<p.second;
    // pair<int ,pair<int,int>>p={1,{3,4}};
    // cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    // pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    // cout<<arr[1].second;
    // return 0;

    //  pair<int,int> p1 = {1,3};
    // cout << p1.first << " " << p1.second << endl;
    
    // pair<int, pair<int,int>> p2 = {1,{3,4}};
    // cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;
    
    // pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    // cout << arr[1].second << endl;
    return 0;
}
void vectorExplained(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    v.emplace_back(1,2);
    vector <int> v2(5,100);
    vector <int> v(5);

    vector <int> v1;
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(6);
    v1.push_back(7);
   
   vector <int> :: iterator it=v1.begin();
//    for(it;it!=v1.end();it++){
//     cout<<*it<<' ';
//    }
    v1.erase(it);
    v1.erase(it+2,it+4);

    vector <int>v(2,10);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
}

void explainList(){
    //similar to list but we can add elements to the front also
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();

}

void explainStack(){
    //LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(4);
    st.emplace(5);
}

void explainQueue(){
    //FIFO
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    
    q.back()+=5;
    cout<<q.front();//1
    cout<<q.back();//9
    q.pop();//2,9
}

void explainPQ(){
    priority_queue<int> pq;//max heap    push and pop are of order log(n) top is order 1
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top();//10
    pq.pop();
    cout<<pq.top();

    //min heap
    priority_queue<int , vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);//{2,5,8,10}
    cout<<pq.top();//2
}
void explainSet(){
    //sorted and unique.its a tree structure 
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(3);
    st.insert(4);//{1,2,3,4}

    auto it=st.find(3);//index
    auto it=st.find(7);//st.end()
    st.erase(5);//takes logn time
}

void explainMultiset(){
    multiset<int>ms;
    //similar to set but follows only order and not unique
}

void explainUset(){
    // unordered set<int> st;
}


void explainMap(){
    map<int,int> mpp;//sorted order of key
    // map<int ,pair <int,int>> mpp;
    // map <pair <int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({3,1});
    
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3);
    cout<<*(it).second;
}