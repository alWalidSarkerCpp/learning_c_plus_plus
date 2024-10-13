/*
read this: set is a collection of some perticular values of a certain data-type ;
though we add same values in a set it won't add values to the set also it returns value in sorted order;
if we don't want sorted then we can use unsorted_set but ut return's values 'randomly'
*/
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    set<int> numbers;
    // unordered_set<char> characters; (same attributes will be applied here)
    numbers.insert(1);
    numbers.insert(4);
    numbers.insert(8);
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);
    numbers.insert(6);
    cout<<"normal print: ";
    for(int character : numbers){
        cout<<character<<" ";
    }
    //returned value in sorted order ( as we are using set 'default version of set' );
    numbers.erase(numbers.begin()); //begin erase
    cout<<endl;
    cout<<"print after removing begin val: ";
    for(int character : numbers){
        cout<<character<<" ";
    }
    //if we want to erase perticular index:
    //set<int>::iterator it = numbers.begin()+1; still we cannt do this
    set<int>::iterator it = numbers.begin();
    it++; // we have to do this insted
    numbers.erase(it);
    cout<<endl;
    cout<<"print after perticular deletion: ";
    for(int character : numbers){
        cout<<character<<" ";
    }
    cout<<endl;
    cout<<"is 2 present ? :"<<numbers.count(2); // tells is it here or not
    cout<<endl;
    set<int>::iterator i = numbers.find(6);
    cout<<"6 is present: "<<*i<<endl; //this is a reference of that value 
    return 0;
}