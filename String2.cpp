#include<iostream>
#include<string>

using namespace std;


int main(){


//concatinate string with string
    //concatinating int with String
    //to_string method to convert int to string

/*string str1 = "Data Structure";
string str2 = "Algorithm";

string str3 = str1 + " and " + str2 + " - "+ to_string(2);
cout << "course name: " << str3 << endl;

*/


//inserting substring
//original string

string original_str = "Hello!!!";

//insert "world" after "Hello"
string s1 = "Hello";
string s2 = " world";

//step-1 find the starting index of "Hello" -> s1
int idx = original_str.find(s1);
cout << idx;

//length of the string
int len = s1.length();
int starting_idx = idx+len;

original_str.insert(starting_idx,s2);
cout << original_str<< endl;



return 0;
}

