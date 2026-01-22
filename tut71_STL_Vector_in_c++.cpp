#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
cout<<"Displaying this dement "<<endl;
for(int i = 0;i < v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
    vector<int> vec1;
int element , size ;
cout<<"Enter the size of your vector "<<endl;
cin>>size;
for(int i = 0;i < size; i++){
    cout<<"Enter the element of your vector "<<endl;
    cin>>element;
    vec1.push_back(element);
}
display(vec1);
return 0;
}