#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
            //          MAP IN STL
        
        //creation of map
        unordered_map<string, string> table;
        
        //insertion
        table["in"] = "India";
        table.insert(make_pair("en", "England"));

        pair<string, string> p;
        p.first = "br";
        p.second = "brazil";
        table.insert(p);

        cout << table.size() <<endl; 

        //find operation
        if(table.find("in") != table.end()){
            cout<<"Key found"<<endl;
        }
        else{
            cout<< " Key not found"<<endl;
        } cout<<endl;

        //count operation
        if(table.count("in") != 0){
            cout<<"Key not found"<<endl;
        }
        if(table.count("in") == 1){
            cout<<"key found"<<endl;
        }
        

        // table.clear();
        // cout<<table.size()<<endl;

        // if(table.empty() == true){
        //     cout<<"map is empty"<<endl;
        // }
        // else{
        //     cout<<"Map is not empty"<<endl;
        // }

    
    return 0;
}