#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const & Max(T const& a,T const& b)
{
    return a<b?b:a;
}

int main()
{
    int i=39;
    int j=35;
    cout<<"Max(i,j):"<<Max(i,j)<<endl;

    double f1=34.56;
    double f2=56.67;
    cout<<"Max(f1,f2):"<<Max(f1,f2)<<endl;

    string s1="WHi,world";
    string s2="world";
    cout<<"Max(s1,s2):"<<Max(s1,s2)<<endl;
    return 0;
}
