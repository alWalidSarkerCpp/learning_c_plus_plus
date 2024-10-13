#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> one(5); // 1d vector with 5 length
    vector<vector<int> > two(5,vector<int>(3)); //2d vector with 5 element where each element holds 3 element
    vector<int> example; // unlimited size
    example.push_back(5);
    example.pop_back(); //removes last element
    example.push_back(5);
    example.push_back(4);
    example.push_back(2);
    example.push_back(67);
    example.push_back(10);
    std::cout<<"example's capacity is: "<<example.capacity()<<endl; // to check memory capacity ( where it tells how much memory has been occupied by the elements of that vector)
    std::cout<<"example's size  is: "<<example.size()<<endl; // tells the number of elements
    std::cout<<"example's nth element is: "<<example.at(0)<<endl;
    std::cout<<"example's front element is: "<<example.front()<<endl; //gives the first element
    std::cout<<"example's last element is: "<<example.back()<<endl; //gives the last element
    std::cout<<endl;
    std::cout<<"example's size before clear: "<<example.size()<<endl;
    std::cout<<"example's capacity before clear: "<<example.capacity()<<endl;
    example.clear();
    std::cout<<"example's size after clear: "<<example.size()<<endl;
    std::cout<<"example's capacity after clear: "<<example.capacity()<<endl;
    //note: when we clear a vector it means we have erased the elements not the capacity
    std::cout<<endl;

    
    // //inserting and erasing
    // example.insert(example.begin()+2,5);
    // // example.insert(example.end()+2,6);
    // for(int i = 0;i<example.size();i++){
    //     std::cout<<example[i]<<endl;
    // }
    return 0;
}