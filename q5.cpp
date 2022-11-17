
#include<iostream>
using namespace std;

template<class T>
class student
{
    T name;
    T roll;
    T marks;
public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    student<int> s1;
    student<char> s2;
    cout<<"Enter details of student 1: "<<endl;
    s1.getdata();
    cout<<"Enter details of student 2: "<<endl;
    s2.getdata();
    cout<<"Details of student 1: "<<endl;
    s1.display();
    cout<<"Details of student 2: "<<endl;
    s2.display();
    return 0;
}
