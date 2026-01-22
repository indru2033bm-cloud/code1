#include<iostream>

using namespace std;

template <class T>
class Indrajith{
    public :
    T data;
    Indrajith(T a){
        data = a;
    }
    void display();
};

template <class T >
void Indrajith<T> :: display(){
    cout<<data<<endl;
}
void fun(int a){
    cout<<"I am first function "<<a<<endl;
}

template <class T>
void fun(T a){
    cout<<"I am templatized function "<<a<<endl;
}

template <class T>
void fun1(T a){
    cout<<"I am templatized function 1 "<<a<<endl;
}
int main(){
Indrajith<bool> i(true);
// Indrajith<int> j(100);
// Indrajith<char> k('W');
i.display();
// j.display();  
// k.display();
fun(34);
fun(45.78);
    return 0;
}