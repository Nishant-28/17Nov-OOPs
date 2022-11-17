// WAP to copy the contents of one file to another file in reverse order

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    ifstream fin;
    fin.open("abc.txt");
    ofstream fout;
    fout.open("xyz.txt");
    fin.seekg(0, ios::end);
    int i = fin.tellg();
    while (i >= 0)
    {
        fin.seekg(i, ios::beg);
        fin.get(ch);
        fout.put(ch);
        i--;
    }
    fin.close();
    fout.close();
    return 0;
}