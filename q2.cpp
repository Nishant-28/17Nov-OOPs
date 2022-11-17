
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fname, lname;
    cout << "Enter first name: ";
    cin >> fname;
    cout << "Enter last name: ";
    cin >> lname;
    ofstream fout;
    fout.open("student.txt", ios::app);
    fout << fname << " " << lname << endl;
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}