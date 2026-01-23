#include<iostream>
#include<list>

using namespace std;
void display(list<int> &lst){
    list<int> :: iterator iter;
    for(iter = lst.begin();iter != lst.end();iter++){
        cout<<*iter<<" ";
    }
}

int main(){
    list<int> lst;
    int n,elements;
    cout<<"Enter number of elements to be is the list: ";
    cin>>n;
    cout<<"Enter the elements: ";

    for(int i = 0; i < n ; i++){
        cin>>elements;
        lst.push_back(elements);
    }
    display(lst);
    lst.sort();
    cout<<"\nSorted list is: ";
    display(lst);
    lst.reverse();
    cout<<"\nReversed list is: ";
    display(lst);
    return 0;

}