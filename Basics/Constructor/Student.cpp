#include<iostream>
#include<ostream>
#include<string>
using namespace std;

class Student{

    private:
    double fees;

    public:

    string name;
    int rollno;
    double marks;

    Student(string n,int r,double m){
        name = n;
        rollno = r;
        marks = m;


    }
    void getinfo(){

        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

};

int main(){
    Student s1("Kushal",54,90);
    s1.getinfo();
    return 0;

}
