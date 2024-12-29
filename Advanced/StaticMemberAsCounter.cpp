#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    static int addNo;
    string name;

    Student(string n){
        addNo++;
        roll = addNo;
        name = n;
    }

    void display(){
        cout<<"Name = "<<name<<"; "<<"Roll = "<<roll<<endl;
    }
};

int Student::addNo = 0;

int main(){
    Student s1("Shankar");
    Student s2("Singh");
    Student s3("Mahanty");
    
    s1.display();
    s3.display();

    cout<<"Toal Number of admissions: "<<Student::addNo<<endl;

    return 0;
}