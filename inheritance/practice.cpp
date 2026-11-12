#include<iostream>
#include<string>
#include<ostream>
using namespace std;

class dypcet{

    public:
    string name;
    int age;
    int rollno;
    dypcet(string name,int age,int rollno){

        this->name=name;
        this->age=age;
        this->rollno=rollno;
        cout<<"Constructor of Class Dypcet\n";

    }
};

class fees{
public:
    double acedemicfees;
    fees(double acedemicfees){
        this->acedemicfees=acedemicfees;
        cout<<"Constructor of class Fees\n";
    }

};
class student : public dypcet, public fees {
public:
    double marks;

    // Parameterized constructor chaining arguments to both parent classes
    student(string name, int age, int rollno, double acedemicfees, double marks)
        : dypcet(name, age, rollno), fees(acedemicfees) {
        this->marks = marks;
        cout << "Constructor of class student\n";
    }

    void getinfo() {
        cout << "\n--- Student Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl; // Fixed 'end' to 'endl'
        cout << "Roll no: " << rollno << endl;
        cout << "Total fees: " << acedemicfees << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Pass all 5 required arguments: name, age, rollno, acedemicfees, marks
    student d("Kushal", 19, 54, 85000.50, 92.5);

    d.getinfo();
    return 0;
}