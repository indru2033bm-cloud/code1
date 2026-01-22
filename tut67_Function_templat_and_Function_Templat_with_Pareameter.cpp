#include<iostream>

using namespace std;

// float functionavg(int a,int b){
//     int avg = (a+b)/2;
//     return avg;
// }
// float functionavg(int a,float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
template <class T1 , class T2>
float functionavg(T1 a,T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}
template <class T>
T swapp(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;

}
int main(){
    // int x = 34;
    // // int y = 63;
    // float y = 9.789;
    // cout<<"The average of "<<x<<" and "<<y<<" is "<<functionavg(x,y)<<endl;
    float x = 45.78;
    float y = 23.78;
    swapp(x, y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}