#include "LL_list.cpp"
template <typename E>
class Queue
{
    List<E> qu;

public:
    Queue()
    {
        qu.init(0,10);
    }
    void enqueue(E item)
    {
        if (!qu.length())
            qu.insert(item);
        else
        {
            qu.moveToEnd();
            qu.insert(item);
            qu.next();
            E d = qu.remove();
            qu.insert(d);
        }
    }
    E dequeue()
    {
        qu.moveToStart();
        E val=qu.remove();
        return val;
    }
    int length()
    {
        return qu.length();
    }
    E front()
    {
        qu.moveToStart();
        return qu.getValue();
    }
    E back()
    {
        qu.moveToEnd();
        return qu.getValue();
    }
    bool is_empty()
    {
        return qu.length()==0;
    }
    void clear()
    {
        while(qu.length())
           qu.remove();
    }
    void print()
    {
        qu.print();
    }
};