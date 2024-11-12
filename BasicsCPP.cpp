#include <iostream>

using namespace std;


class student{

//private access modifier automatic
string name;
int id;



public:

    double cgpa;
    /*student(string n, int id, double cgpa){

    name = n;
    this->id = id;
    this->cgpa = cgpa;

    } */
//constructor declaration
student(string n, int id, double cgpa): name(n),id(id),cgpa(cgpa){

    cout << "Student Constructor" << endl;

}
//empty constructor
student(){

}

void display(){

cout << "name: "<<name <<" id: "<<id<<" cgpa: "<<cgpa;
}

void setCgpa(double         cgpa){

if(cgpa <= 4){
    this->cgpa = cgpa;
  }
else{
    cout << "Invalid Update" << endl;
  }
}


};


int main()
{
    student s1("Abir",3,4.0);
    s1.display();

    s1.setCgpa(3);
    s1.display();

    return 0;





     /*int a,b, sum,sub;

    cout << "Enter a:";
    cin>>a;

    cout << "Enter b:";
    cin>>b;

    sum = a+b;
    sub = a-b;

    cout<< "Sum of a and b is : "<<sum << endl;
    cout<< "Sub of a and b is : " <<sub << endl; */
}





//scanf -> cin
//printf -> cout

//Structue all are public
//class access modifier different public,private,protected
