#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){

    vector<int> vkt = {12,13};
    vkt.push_back(3);
    vkt.push_back(7);

    int target = 10;
    //z will store the address of the element
    auto z = find(vkt.begin(),vkt.end(),target);

    if(z!=vkt.end()){
        cout << target <<" is in the vector"<<endl;
    }
    else{
        cout << target <<" is not in the vector"<<endl;
    }


    //sort the vector in ascending order(small to big)
    sort(vkt.begin(),vkt.end());

    //sort the vector in descending order(big to small)
    sort(vkt.begin(),vkt.end(),greater<int>());


    cout<< "Vector Elements: " << endl;

    for(int x:vkt){
        cout << x << endl;

    }



}
