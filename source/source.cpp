#include<iostream>

#include"algorithms.h"

using namespace std;

int main()
{
    linklist<int> list;   
    list.push_back(5);
    list.push_back(6);
    list.show();

    int a = 5;
    int *p;
    p = &a;
    cout << *p << "\t" << a << endl;
}