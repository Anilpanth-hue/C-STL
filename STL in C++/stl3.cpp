#include<iostream>
#include<queue>
using namespace std;
int main(){

        //   QUEUE IN STL

        //CREATION
        queue<int> q;

        // INSERTION
        q.push(10);  // here use push not push_back
        //10
        q.push(20);
        //10 -> 20
        q.push(30);
        //10  ->  20 -> 30
        q.push(40);
        //10 -> 20 -> 30 -> 40

        cout<<q.size()<<endl;;

        q.pop();
        //20 -> 30 -> 40
        cout<<q.size()<<endl;;

        if(q.empty() == true){
            cout<<"it is empty"<<endl;
        }
        else{
            cout<<"Not empty";
        }cout<<endl;
        
        //swapping fucntion works same as list and vectors
        
    return 0;
}