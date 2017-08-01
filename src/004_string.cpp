/*************************************************************************
	> File Name: 004_string.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2017 10:49:13 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s1("hello ");
    string s2="world";
    string s3=s1+s2;
    const char *s4=s3.c_str();
    string s5(s3,1,4);
    cout<<s3<<endl;
    cout<<"s5:"<<s5<<endl;
    string s6(s1);
    cout<<"s6:"<<s6<<endl;


    string s7(10,'K');
    cout<<"s7:"<<s7<<endl;


    s6.swap(s7);
    cout<<"s6:"<<s6<<" s7:"<<s7<<endl;
    return 0;
}
