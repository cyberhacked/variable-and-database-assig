/*
Write a C++ program to find size of basic data types. (Medium)
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth)
Sample Output :
Size of fundamental data types :
The sizeof(char) : 1 bytes
The sizeof(short) : 2 bytes
The sizeof(int) : 4 bytes
The sizeof(long): 4 bytes
The sizeof(long long) : 8 bytes
The sizeof(float) : 4 bytes
The sizeof(double) : 8 bytes
The sizeof(long double) : 12 bytes
The sizeof(bool) : 1 bytes
*/
#include<iostream>
using namespace std;
int main()
{
    int integer;
    char character;
    float float_datatypes;
    double double_datatypes;
    long long_datatypes;
    short short_datatypes;
    long long lo_datatypes;
    long double lo_double_datatypes;
    bool bool_datatypes;
    cout<<"The size of int is:"<<sizeof(integer)<<endl;
    cout<<"The size of char is:"<<sizeof(char)<<endl;
    cout<<"The size of float is:"<<sizeof(float_datatypes)<<endl;
    cout<<"The size of double is:"<<sizeof(double_datatypes)<<endl;
    cout<<"The size of long is:"<<sizeof(long_datatypes)<<endl;
    cout<<"The size of short is:"<<sizeof(short_datatypes)<<endl;
    cout<<"The size of long long is:"<<sizeof(lo_datatypes)<<endl;
    cout<<"The size of long double is:"<<sizeof(lo_double_datatypes)<<endl;
     cout<<"The size of bool is:"<<sizeof(bool_datatypes)<<endl;
    return 0;
}