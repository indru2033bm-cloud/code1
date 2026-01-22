#include<iostream>

using namespace std;

template <class T1 ,class T2>
class myclass{
    public :
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }
};

template <class T1, class T2, class T3>
class myroom : public myclass<T1 ,T2>{
    public :
     T3 data3;
     myroom(T1 a, T2 b, T3 c) : myclass<T1, T2>(a, b){
        data3 = c;
     }
     void display(){
        cout<<this->data1<<endl<<this->data2<<endl<<data3<<endl;
     }

};
int main(){
    myroom<int, float, string> obj(34 , 45.9, "Hello world");
    obj.display();

    return 0;
}
