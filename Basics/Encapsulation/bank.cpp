#include<iostream>
#include<ostream>
#include<string>
using namespace std;

class Bank{

private:
double balance;
double password;

public:
int accountid;
string holdername;
};

int main(){

    Bank b;
    b.accountid=321654;
    b.holdername="Kushal";

    cout<<b.accountid<<endl;
    cout<<b.holdername<<endl;
    return 0;
}