/*
Write a C++ program to swap two numbers with the help of a third variable. 
Sample Input : 2, 3
Sample Output : 3, 2
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=2,b=3;
    c=b;
    b=a;
    a=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}