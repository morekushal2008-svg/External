#include<iostream>
#include <string>
#include <ostream>
using namespace std;

//Class creation

class Teacher{ 
    //Acess specifier 
    //Attributes OR Properties
private:

double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
 
};
int main(){

    Teacher t1;
    t1.name="Kushal";
    t1.dept="cse";
    t1.subject="maths";
    

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    
}
