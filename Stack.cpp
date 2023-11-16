#include "Stack.h"
template <typename T>
class Stack
{
    Queue<T> stk;

public:
    void push(T item)
    {
        stk.enqueue(item);
    }
    void clear()
    {
        stk.clear();
    }
    T pop()
    {
        int l=stk.length();
        for(int i=1;i<l;i++)
        {
            T r=stk.dequeue();
            stk.enqueue(r);
        }
        return stk.dequeue();
    }

    int length()
    {
        return stk.length();
    }
    T topValue()
    {
        return stk.back();
    }
    bool isEmpty()
    {
        return stk.is_empty();
    }
    void print()
    {
       stk.print();
    }
};
