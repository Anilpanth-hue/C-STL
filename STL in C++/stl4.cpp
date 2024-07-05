#include<iostream>
#include<stack>
using namespace std;
int main(){
                // STACKS IN STL
    
    //creation of stack
    stack<int> st;

    //insertion in stack
    st.push(10);
    //10
    st.push(20);
    //10, 20
    st.push(30);
    //10, 20, 30

    cout<<st.size()<<endl;
    //3

    st.pop(); // top element will be popped out
    //10, 20

    cout<<st.size()<<endl;
    //2

    cout<<st.top()<<endl;
    //20

    if(st.empty() == true){
        cout<<"It is empty";
    }
    else{
        cout<<"Not empty";
    }cout<<endl;
    
    



    return 0;
}