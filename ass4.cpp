/*Write a C++ program to calculate the cube of a number. 
Sample Input : 4
Sample Output : 64
*/
#include<iostream>
using namespace std;
int main()
{
    int side,cube;
    cout<<"Enter the Number:";
    cin>>side;
    cube=side *side * side;
    cout<<"Cube of a number:"<<cube;
    return 0;
}