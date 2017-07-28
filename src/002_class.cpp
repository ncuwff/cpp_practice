/*************************************************************************
	> File Name: 002_class.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2017 07:07:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

//By default,class members are private
class date
{
    public:
    int year;
    int month;
    int day;
};

int main()
{
    date d;
    d.year=2017;
    d.month=7;
    d.day=28;
    cout<<"year:"<<d.year<<"  month:"<<d.month<<"  day:"<<d.day<<endl;
    return 0;
}
