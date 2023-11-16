#include<iostream>
using namespace std;
template<typename T>
class List
{
        T *list;
        int len,chunksize;
        int current_pos=0;
    public:
       void init(int k,int x)
        {
            list=new T[x];
            len=k;
            chunksize=x;
            for(int i=0;i<k;i++)
            {
                cin>>list[i];
            }
        }
        void insert(T item)
        {
            if(len==chunksize)
            {
                chunksize*=2;
                T *tem=new T[chunksize];
                for(int i=0;i<len;i++)
                {
                    tem[i]=list[i];
                }
                delete[] list;
                list=tem;
            }
            if(len==0)
            {
                current_pos=0;
                list[len++]=item;
            }
            else
            {
                list[current_pos]=item;
                len++;
            }
        }
        T remove()
        {
            T rmv=list[current_pos];
            len--;
            return rmv;
        }
        void moveToStart()
        {
            current_pos=0;
        }
        void moveToEnd()
        {
            current_pos=len-1;
        }
        void prev()
        {
             current_pos--;
        }
        void next()
        {
            current_pos++;
        }
        int length()
        {
            return len;
        }
        int currPos()
        {
            return current_pos;
        }
        void moveToPos(int pos)
        {
            current_pos=pos;
        }
        T getValue()
        {
            return list[current_pos];
        }
        void print()
        {
            cout<<"< ";
            for(int i=0;i<len;i++)
            {
                cout<<list[i];
                if(i!=(len-1))
                    cout<<",";
            }
            cout<<" >"<<endl;
        }
        int Mem_size()//extra helper function 
        {
            return chunksize;
        }
};