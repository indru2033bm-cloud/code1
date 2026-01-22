#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "Enter the string to store in the file" ;
    string st1;
    
     ofstream in("sample60.txt");//write operation
        in<<st;
    
        ifstream out("sample60.txt");//read operation
        getline(out,st1);
        out>>st1;
        cout<<"The content in the file is :"<<st1<<endl;
        return 0;
}