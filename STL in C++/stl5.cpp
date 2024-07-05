#include<iostream>
#include<queue>
using namespace std;

int main(){
                    //   DEQUE IN STL

    //cretaion
    deque<int> dq;

    //insertion
    dq.push_back(10);
    //10
    dq.push_back(20);
    //10, 20
    dq.push_back(30);
    //10, 20, 30
    dq.push_back(40);
    //10, 20, 30, 40

    dq.push_front(100);
    //100, 10, 20, 30, 40

    dq.push_front(200);
    //200, 100, 10, 20, 30, 40

    dq.pop_front();
    //100, 10, 20, 30, 40

    dq.pop_back();
    //100, 10, 20, 30

    deque<int>::iterator it = dq.begin();

    cout<<"[ "; 
    while(it != dq.end()){
        cout<<  *it <<" ";
        it++;
    }cout<<"]"; cout<<endl; 

    // cout<<dq.size()<<endl;
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // if(dq.empty() == true){
    //     cout<<"It is empty"<<endl;
    // }
    // else{
    //     cout<<"It is not empty"<<endl;
    // }


    
    return 0;
}