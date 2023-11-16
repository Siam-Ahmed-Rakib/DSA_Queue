#include "Stack.cpp"
int main()
{
    Queue<int> A,C;
    Stack<int> B;
    while(true)
    {
        char choice;
        cin>>choice;
        if(choice=='A')
        {
            int a;
            cin>>a;
            A.enqueue(a);
            cout<<"A takes card "<<a<<" from deck"<<endl;
        }
        else if(choice=='B')
        {
            int a;
            cin>>a;
            B.push(a);
            cout<<"B takes card "<<a<<" from deck"<<endl;
        }
        else if(choice=='C')
        {
             char c;
             cin>>c;
             if(c=='A')
             {
                if(A.is_empty())
                {
                    cout<<"A has no cards"<<endl;
                }
                else
                {
                    int i=A.dequeue();
                    cout<<"C takes card "<<i<<" from A"<<endl;
                    C.enqueue(i);
                }
             }
             else if(c=='B')
             {
                if(B.isEmpty())
                {
                    cout<<"B has no cards"<<endl;
                }
                else
                {
                    int i=B.pop();
                    cout<<"C takes card "<<i<<" from B"<<endl;
                    C.enqueue(i);
                }
             }
             else if(c=='E')
             {
                 while(!C.is_empty())
                 {
                     cout<<"C returns card "<<C.dequeue()<<endl;
                 }
                 break;
             }
             
        }
    }
    return 0;
}