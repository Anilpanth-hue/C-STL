#include<iostream>
#include<set>
#include<unordered_set> 
using namespace std;

int main(){
                //  SET IN STL
        
    //creation
    unordered_set<int> st;

    //insertion
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    if(st.count(15) == 1){
        cout<<"founded"<<endl;
    }
    if(st.count(15) == 0){
        cout<<"Not founded"<<endl;
    }

    if(st.find(153) != st.end()){
        cout<<"founded"<<endl;
    }
    else{
        cout<<"Not founded"<<endl;
    }
    
    //traverse
    unordered_set<int>::iterator it = st.begin();

    while(it != st.end()){
        cout<< *it << endl; // it always gives the sorted array in ordered set and random position in unordered set
        it++;
    }cout<<endl;
    
    return 0;
}