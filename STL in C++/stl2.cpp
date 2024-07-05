#include<iostream>
#include<list>
using namespace std;

int main(){

                        // LIST IN STL & Member funtions of it
    // //creation of list
    // list<int> myList;

    // swap
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // 10 -> 20 -> 30

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    // 100 -> 200 -> 300

    cout<<"Before swapping"<<endl;
     list<int>::iterator it2 = first.begin();
    while(it2 != first.end()){
        cout<<*it2 << " ";
        it2++;
    }cout<<endl;


    first.swap(second);

    cout << "After swapping"<<endl;
    list<int>::iterator it3 = first.begin();
    while(it3 != first.end()){
        cout<<*it3 << " ";
        it3++;
    }cout<<endl;



    // //insertion under list
    // myList.push_back(10);
    // // 10

    // myList.push_back(20);
    // // 10 -> 20

    // myList.push_back(30);
    // // 10 -> 20 -> 30

    // myList.push_back(40);
    // // 10 -> 20 -> 30 -> 40

    // myList.push_front(100);
    // // 100 -> 10 -> 20 -> 30 -> 40

    // myList.pop_back();
    // // 100 -> 10 -> 20 -> 30


    // myList.pop_front();
    // // 10 -> 20 -> 30

    // myList.push_back(10);
    
    // // cout << myList.size() << endl;
    // cout<<"Before removing "<<endl;
    // list<int>::iterator it = myList.begin();
    // while(it != myList.end()){
    //     cout<<*it << " ";
    //     it++;
    // }cout<<endl;

    // myList.remove(10);
    // cout<<"After removing "<<endl;
    // list<int>::iterator it2 = myList.begin();
    // while(it2 != myList.end()){
    //     cout<<*it2 << " ";
    //     it2++;
    // }cout<<endl;

    //clearing all using clear function
    // myList.clear();

    // cout << myList.size() << endl;

    // if(myList.empty() == true){
    //     cout<<"List is empty"<<endl;
    // }
    // else{
    //     cout<<"List is not empty"<<endl;
    // }


    

    
    return 0;
}