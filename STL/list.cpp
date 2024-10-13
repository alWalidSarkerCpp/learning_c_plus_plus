#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> numbers;
    numbers.push_back(2);
    numbers.push_front(1);
    for(int n : numbers){
        cout<<n<<endl;
    }
    cout<<"after erase: "<<endl;
    numbers.erase(numbers.begin()); // begin or or ( we cannt use nothing else )
    for(int n : numbers){
        cout<<n<<endl;
    }
    cout<<"size of numbers's :"<<numbers.size()<<endl;

    list<int> make(10,5); // have 5, 10 times
    
    return 0;
}