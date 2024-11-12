#include<iostream>
#include<string>

using namespace std;


int main(){

string str1,str2;

cout<<"Enter a string: ";

//Read Line(long String)
getline(cin,str1);

//read single word only
//cin>>str1;

//cout<<"Enter another string: ";
//cin>>str2;



cout << "Enter a String: ";
getline(cin,str2);

cout<<"String 1: " << str1 << endl;
cout<<"String 2: " << str2 << endl;




return 0;
}

