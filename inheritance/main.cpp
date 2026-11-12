#include<iostream>
#include<ostream>
#include<string>
using namespace std;

class person{
 public:
    string name;
    int age;

    person(){
        cout<<"I am parent constructor\n";
    }
    ~person(){
        cout<<"Everything erased in parent clss\n";
    }
};

class student : public person{
public:

    int rollno;
    
    student(){
        cout<<"Child constructor\n";


    }

    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
         cout<<"roll no: "<<rollno<<endl;

    }
    ~student(){
        cout<<"Everything erased from student class\n";
    }
};
int main(){

    student s1;
    s1.name="kushal";
    s1.age=21;
    s1.rollno=54;
    
    s1.getinfo();
    return 0;
}