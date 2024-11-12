#include<iostream>
#include<map>
#include<vector>

using namespace std;

class student{


    string id;
    string name;
    double cgpa;



};





int main(){


    vector<int> v = {5,1,3,2,6,1,2,2};
    map<int,int> m;

    for(int x:v){
        m[x]++;

    }

    cout << "Number of occurances of 1: " << m[1] << endl;

    for(auto i:m){

            cout<< "number:"<<i.first << " count: "<< i.second <<endl;

    }

}
