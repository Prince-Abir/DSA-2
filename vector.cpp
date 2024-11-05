#include<iostream>
#include<vector>

using namespace std;


int main(){

vector<int> vkt(10,0);


vkt.push_back(3);
vkt.push_back(8);
vkt.push_back(6);
vkt.push_back(14);


int size = vkt.size();
cout << "Total Size: "<<size <<endl;


//insert 21 at the beginning
vkt.insert(vkt.begin(),21);

//insert a val into specific index
vkt.insert(vkt.begin()+3,32);

//delete a element in specific index
vkt.erase(vkt.begin()+3);

for(int x:vkt)cout<<x <<endl;

return 0;
}
