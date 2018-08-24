#ifndef _ALGORITHMS_HPP_
#define _ALGORITHMS_HPP_

#include<iostream>
using namespace std;

class _algorithms
{
    public:
    int gcd(int left_hand, int right_hand); //greatest common divisor  
    _algorithms() {}
    ~_algorithms() {}
};

template <typename type_>
class linklist
{
    struct Node 
    {
        type_ contain;//содержимое ячейки
        Node* next_node;//ссылка на следующую ячейку 
    };

    Node *head; 
    
    public:

    linklist() 
    {
        head = NULL;
    }

    void push_back(type_ element)
    {
        Node* current = new Node;
        current->contain = element;
        current->next_node = head;
        head = current;
    }

    void show()
    {
        while (head != NULL)
            {
                cout << head->contain << endl;
                head = head->next_node;
            }
    }

    ~linklist() {}
};

#endif