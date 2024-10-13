#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> numbers;
    numbers.push_back(2);
    numbers.push_front(1);
    // numbers.pop_back(); 
    // numbers.pop_front(); 
    for(int num : numbers){
        std::cout<<num<<endl;
    }
    std::cout<<"Number's 1th position element is: "<<numbers.at(1)<<endl;
    std::cout<<"Check numbers's empty or not: "<<numbers.empty()<<endl;
    std::cout<<endl;
    cout<<"number's size before erasing: "<<numbers.size()<<endl;
    numbers.erase(numbers.begin(),numbers.begin()+1); // remember we have to give range in deque 
    //means we want to delete the first element ( here the number does not works like an index )
    for(int num : numbers){
        std::cout<<"after erasing remaining element: "<<num<<endl;
    }
    cout<<"number's size after erasing: "<<numbers.size()<<endl;

    return 0;
}