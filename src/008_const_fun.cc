#include <iostream>
using namespace std;


class class1
{
    public:
    int i;
    class1()
    {
        i=1;
        cout<<"Have set i=1"<<endl;
    }
    void fun1()
    {
        cout<<"i="<<i<<endl;
    }
    void fun2() const
    {
        cout<<"i="<<i<<endl;
    }
};



int main()
{
    cout<<"Hello"<<endl;
    class1 c1;
    c1.fun1();
    c1.fun2();

    const class1 c2;
    //c2.fun1();//compile error
    c2.fun2();


    return 0;
}
