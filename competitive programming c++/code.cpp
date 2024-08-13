#include<iostream>
using namespace std;

int multiply(int size,int Res[],int n)
{
    int carry=0;
    for(int x=0;x<size;x++)
    {
        int product=Res[x]*n+carry;
        Res[x]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        Res[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}

int main()
{
    int N,size=1,i;
    int Res[10000];
    Res[0]=1;
    cin>>N;
    for(i=2;i<=N;i++)
    {
        size=multiply(size,Res,i);
    }
    for(i=size-1;i>=0;i--)
    {
        cout<<Res[i];
    }
    return 0;
}