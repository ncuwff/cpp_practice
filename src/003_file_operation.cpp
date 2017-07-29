/*************************************************************************
	> File Name: 003_file_operation.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Jul 2017 06:38:10 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];

    //create File
    ofstream outfile;
    outfile.open("testfile");

    cout<<"Write \"Hello,world!\" to file"<<endl;
    outfile<<"Hello,world"<<endl;

    outfile.close();

    ifstream infile;
    infile.open("testfile");

    cout<<"Read data from file"<<endl;
    infile>>data;
    cout<<data<<endl;

    infile.close();

    return 0;
    
}

