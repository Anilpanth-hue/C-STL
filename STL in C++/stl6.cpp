#include<iostream>
#include<queue>
using namespace std;

int main(){
            //          PRIORITY QUEUE IN STL

            // min heap ->> Minimum value ->> Highest Priority
            priority_queue<int, vector<int>, greater<int> > pq;
            pq.push(100);
            //100

            pq.push(50);
            //50,100

            pq.push(75);
            //50,75,100

            cout << pq.top()<<endl;
            //50 will ans
            pq.pop();
            //75,100

            cout << pq.top()<<endl;
            
            pq.pop();
            //100
            cout<<pq.top()<<endl;

            
    
        // // CREATION
        // priority_queue<int> pq;
        // //max-heap -> maximum value -> Highest priority

        // pq.push(10); 
        // //10
        // pq.push(25);
        // //25, 10
        // pq.push(11);
        // //25,11,10
        // pq.push(99);
        // //99,25,11,10

        // //top element -> Highest priority
        // cout<<pq.top()<<endl;

        // //in pop func, Highest priority element -> POP
        // pq.pop();
        // //25,11,10
        // // i.e-> 99 will got pop
        // cout<<"After popping top element"<<endl;
        // cout << pq.top()<<endl;

        // cout<<pq.size()<<endl;

        // if(pq.empty() == true){
        //     cout<<"YES, IT IS EMPTY"<<endl;
        // }
        // else{
        //     cout<<"NO, It is not empty"<<endl;
        // }
    return 0;
}