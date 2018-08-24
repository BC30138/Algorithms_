#ifndef _ALGORITHMS_H_
#define _ALGORITHMS_H_

#include"algorithms_interface.h"

#include<iostream>
using namespace std;

class _algorithms : public _algorithms_interface 
{
    public:
    void scream_()
    {
        _algorithms_interface : scream();
        cout << first_ + second_ << endl;
    }
    _algorithms(int a,int b) 
    {
        first_ = a;
        second_ = b;
    }
    ~_algorithms() {}
};

#endif