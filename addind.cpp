#include<iostream>
#include<vector>
#include<list>


using namespace std;
template <class T>
void display1(vector<int> &v){
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
template <class T>
void display(list<int> &ls){
    typename list<int> :: iterator it;
    for(it = ls.begin(); it != ls.end(); it++){
        cout<<*it<<" ";
    }
}
int main(){
    vector<int> vec;
    list<int>ls;
    int n,elem;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin>>elem;
        vec.push_back(elem);
        ls.push_back(elem);
    }
    display1(vec);
    cout<<endl;
    display(ls);
    cout<<endl;
}
