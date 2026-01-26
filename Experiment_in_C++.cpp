#include<iostream>
#include<vector>
#include<list>

using namespace std;
template <class T>
void display(vector <T> &v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}

template <class T>
void display(list <T> &lst){
    typename list<T> :: iterator iter;
    for(iter = lst.begin(); iter != lst.end(); iter++){
        cout<<*iter<<" ";
    }
}
int main(){
    vector<int> vec;
    list<int> lst;
    int n,elements;
    cout<<"Enter number of elements to be in the vector: ";
    cin>>n;
    cout<<"Enter the elements for vector: ";
    for(int i = 0; i < n;i++){
        cin>>elements;
        vec.push_back(elements);  
      }
    cout<<"Enter the elements for list: ";
    for(int i = 0; i < n;i++){
        cin>>elements;
        lst.push_back(elements);
    }
    display(vec);
    cout<<endl;
    display(lst);

}