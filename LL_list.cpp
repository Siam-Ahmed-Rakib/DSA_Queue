#include<iostream>
using namespace std;
template<typename T>
struct L_list
{
        T value;
        L_list* next;
    public:
    L_list(T m)
    {
        value=m;
        next=nullptr;
    }
};
template<typename T>
class List
{
        L_list<T>* head;
        int len;
        int current_pos=0;
    public:
       List()
       {
            head = nullptr;
            len = 0;
       }
       void init(int k,int n)
        {
            head=nullptr;
            len=k;
            T x;
            L_list<T>* tem;
            L_list<T>* prev;
            for(int i=0;i<k;i++)
            {
                cin>>x;
                if(head==nullptr)  
                    {
                        head=new L_list<T>(x);
                        prev=head;
                    }
                else
                {
                    tem=new L_list<T>(x);
                    prev->next=tem;
                    prev=tem;
                } 
            }
        }
        void insert(T item)
        {
            if(head==nullptr)
            {
                head=new L_list<T>(item);
                len++;
                current_pos=0;
                return ;
            }
            L_list<T>* tem=head;
            L_list<T>* prev=head;
            for(int i=0;i<current_pos;i++)
            {
                prev=tem;
                tem=tem->next;
            }
            if(head==tem)
            {
                prev=new L_list<T>(item);
                prev->next=head;
                head=prev;
            }
            else
            {
                prev->next=new L_list<T>(item);
                prev->next->next=tem;
            }  
            len++;
        }
        T remove()
        {
            T rmv;
            L_list<T>* tem=head;
            L_list<T>* prev=head;
            for(int i=0;i<current_pos;i++)
            {
                prev=tem;
                tem=tem->next;
            }
            if(head==tem)
            {
                rmv=head->value;
                head=head->next;
                delete tem;
            }
            else
            {
                prev->next=prev->next->next;
                rmv=tem->value;
                delete tem;
            } 
            len--;
            if(len==current_pos)
                current_pos--;
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
            if(current_pos > 0)
                current_pos--;
        }
        void next()
        {
            if(current_pos < len-1)
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
            if(0>pos||pos>=len)
            {
                cout<<"Wrong position !!  Position should be a positive number and smaller than list's length"<<endl;
                return;
            }
            current_pos=pos;
        }
        T getValue()
        {
            L_list<T>* tem=head;
            for(int i=0;i<current_pos;i++)
            {
                tem=tem->next;
            }
            return tem->value;
        }
        void print()
        {
            cout<<"< ";
            L_list<T>* tem=head;
            for(int i=0;i<len;i++)
            {
                cout<<tem->value;
                tem=tem->next;
                if(i!=(len-1))
                    cout<<",";
            }
            cout<<" >"<<endl;
        }
};