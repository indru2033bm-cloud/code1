#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream iout("sample61.txt");//write operation
    cout<<"Enter yiur name :";
    string name;
    cin>>name;
    iout<<name + " is my name";

    iout.close();

    ifstream iin("sample61.txt");
    string content;
    getline(iin,content);
    cout<<"content in the file is :"<<content<<endl;

    iin.close();

    return 0;


}