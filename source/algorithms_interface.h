#ifndef _ALGORITHMS_INT_H_
#define _ALGORITHMS_INT_H_

#include<iostream>
using namespace std;

class _algorithms_interface
{
    protected:
    int first_;
    int second_;
    
    public:
    virtual void scream()
    {
        cout << first_ << second_ << endl;
    }
    _algorithms_interface() {first_ = second_ = 0;}
    ~_algorithms_interface() {}
};

#endif 