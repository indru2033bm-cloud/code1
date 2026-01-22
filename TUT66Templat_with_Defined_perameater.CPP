#include<iostream>

using namespace std;

template <class T1 = int , class T2 = float , class T3 = char>
class indrajith{
    public :
    T1 data;
    T2 data1;
    T3 data2;
    indrajith(T1 x,T2 y,T3 z){
        data = x;
        data1 = y;
        data2 = z;
    }
    void display(){
        cout<<data<<endl
        <<data1<<endl
        <<data2<<endl;
    }

};
int main(){
    indrajith<> i(23,34.6,'y');
    i.display();
    cout<<endl;
    indrajith<bool , int ,char> g(false,56,'4');
    g.display();
    return 0;

}