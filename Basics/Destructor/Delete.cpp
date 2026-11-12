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

    Student(string name,int rollno,double marks){ // for same use this keyword to state that this is object property
        

       this-> name = name;
       this-> rollno = rollno; 
      this->  marks = marks;


    }
    //Destructor to erase memory
    ~Student(){  
        cout<<"Hii, I deleted everything\n";


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
