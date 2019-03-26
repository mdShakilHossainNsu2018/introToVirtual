#include <iostream>
using namespace std;

class base{
public:
    virtual void show(){
        cout<<"from base class"<<endl;
    }
};

class derived:public base{
public:
    void show(){
        cout<<"from the derived class."<<endl;
    }
    void nothing(){
        cout<<"nothing from derived class"<<endl;
    }
};

int main() {
    base b, base1;
    b.show();
    derived d;
    d.nothing();
    d.show();

    base *bp=&d;
    bp->show();
    bp = &b;
    bp->show();
    int n;
    cin>>n;
    if (n%2)bp = &b;
    else bp = &base1;
    bp->show();
    return 0;
}