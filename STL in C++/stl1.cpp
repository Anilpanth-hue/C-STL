#include<iostream>
#include<vector>
using namespace std;

int main(){                                 // Vectors in stl 

    //creation
    // vector<int> marks; // matlab 5 blocks ke andar -1,-1,-1,-1,-1 store kar rakha hai 5 baar


    // Lets's create an 2-D Array
    vector<vector<int>> arr(5, vector<int>(4,0));
    //2-D Array Created with 5 rows, with 4 columns, with initial value of each cell as 0
    int totalRows = arr.size(); // finding total rows 
    int totalCol = arr[0].size(); // finding total  columns

    // What is this???
    //So, this is creating of 2-D array with different sizes of inner vector<int> arrays, like if we have given diff-diff sizes of inner
    // array then we this is strategy to find them.
    vector<vector<int>> brr(4);
    
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int totalRow = brr.size();
    // finding total column using the loop becoz every vector has its diff size
    // int totalCol = brr[i].size(); This will be done  using loop 

    // vector<int> first;
    // // vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // //traversing the vector using iterator

    // //create a iterator
    // vector<int>::iterator it = first.begin();

    // while(it != first.end()){
    //     cout<< *it <<" ";
    //     it++;   
    // }

    // second.push_back(20);
    // second.push_back(21);
    // second.push_back(22);
    // second.push_back(23);

    // first.swap(second); // swap function used to swap thier values
    
    // cout<<first[0]<< " "<< first[1] << " " << first[2] << " " << first[3] << endl;// it is lengthy so we use here for each loop

    // // For-each loop
    // for(int i:first){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // for(int i:second){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);
    // marks.clear();   USED to clear all elements from vector

    // marks.erase(marks.begin(), marks.end()); // Just used to erase the elements from the array by giving thier begining and ending   

    // marks.insert(marks.begin(), 50);

    // cout << marks[0] << " "<<endl;

    // cout<< marks.capacity()<<endl;
    // BUT SIZE will be
    // cout<<marks.size()<<endl;

    // cout<<marks[0]<<endl;      /// both are same up and down    (DOWN)
    // cout << marks.at(0)<<endl; ///                              (UP)

    // cout<< marks[0] << endl;

    // cout<< "Size : "<< marks.size() <<endl;

    // if(marks.empty() == true){
    //     cout<<"Vector is empty"<<endl;
    // }
    // else{
    //     cout<<"IT IS FULL"<<endl;
    // }

    // marks.pop_back(); // 40 will be removed means last element will be removed
    // cout<<"After removal of one element by using the function pop back "<<endl;
    // cout<< "Size : " << marks.size() << endl;

    // cout<<"SO the front element will be " << marks.front()<<endl;

    // cout<<"And the last element will be " << marks.back()<<endl;

    // cout<< *(marks.begin())<<endl;

    // cout<<*(marks.end())<<endl; // gives up any junk value



    //vectorsize
    // vector<int> miles(10);

    // vector<int> distances(15, 0);

    // vector<int> age(100);
    // age[0] = 10;


    return 0;
}