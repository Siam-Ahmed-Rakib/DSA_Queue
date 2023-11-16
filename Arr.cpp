#include "Arr_list.cpp"
template <typename E>
class Queue
{
    List<E> qu;
    int f, l;

public:
    Queue()
    {
        qu.init(0, 100);
        f = -1;
        l = -1;
    }
    void enqueue(E item)
    {      
            if(qu.length()==0)
            {
                f=0;
                l=0;
                qu.insert(item);
            }
            else
            {
                if(qu.Mem_size()==qu.length())
                {
                    l=(l+1);
                    qu.moveToPos(l);
                    qu.insert(item);
                }
                else
                {
                    l=(l+1) % qu.Mem_size();
                    qu.moveToPos(l);
                    qu.insert(item);
                }
            }
    }
    E dequeue()
    {
        qu.moveToPos(f);
        E val = qu.remove();
        f = (f + 1) % qu.Mem_size();
        return val;
    }
    int length()
    {
        return qu.length();
    }
    E front()
    {
        qu.moveToPos(f);
        return qu.getValue();
    }
    E back()
    {
        qu.moveToPos(l);
        return qu.getValue();
    }
    bool is_empty()
    {
        return qu.length() == 0;
    }
    void clear()
    {
        qu.moveToPos(f);
        for (int i = f; i != l; i = (i + 1) % qu.Mem_size())
        {
            qu.remove();
        }
        qu.remove();
        f = -1;
        l = -1;
    }
    void print()
    {
        if (qu.length() == 0)
        {
            cout << "< >" << endl;
        }
        else
        {
            cout << "< ";
            qu.moveToPos(f);
            int i;
            for (i = f; i != l; i = (i + 1) % qu.Mem_size())
            {
                cout << qu.getValue();
                qu.next();
                cout << ",";
            }
            cout << qu.getValue();
            cout<<" >"<<endl;
        }
    }
};