#include <iostream>
using namespace std;

int GCD(int number1,int number2){
    if(number1%number2 == 0) return number2;
    return GCD(number1,number1%number2);
}

int LCM(int &bigger,int number1, int number2){
    while(true){
        if(bigger%number1==0 && bigger%number2==0){
            return bigger;
        };
        bigger++;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a,b);
    cout<<"gcd: "<<gcd<<endl;
    int bigger = a>b ? a : b;
    int lcm = LCM(bigger,a,b);
    cout<<"lcm: "<<lcm;
    return 0;
}