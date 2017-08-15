#include <iostream>
using namespace std;


namespace n1
{
    int i=1;
    void fun()
    {
        cout<<"i="<<i<<endl;
    }
}


namespace n1
{
    int j=2;
    namespace n2
    {
        int k=3;
        void fun()
        {
            cout<<"k="<<k<<endl;
        }

    }
}

int main()
{
    cout<<"Hi"<<endl;
    cout<<n1::i<<endl;
    cout<<n1::j<<endl;
    n1::fun();
    n1::n2::fun();
    return 0;
}
