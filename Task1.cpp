#include "LL.cpp"
//#include "Arr.cpp"
int main()
{
    Queue<int> q;
    while (true)
    {
        int choice;
        cout << "0.Exit" << endl;
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Length" << endl;
        cout << "4.Front" << endl;
        cout << "5.Back" << endl;
        cout << "6.Is Empty" << endl;
        cout << "7.Clear" << endl<<endl;
    
        cout << "Enter Your choice : ";
        cin >> choice;
        if (choice == 0)
            break;
        else if (choice == 1)
        {
            int t;
            cout << "Enter the element : ";
            cin >> t;
            q.enqueue(t);
            cout << "The updated queue : ";
            q.print();
        }
        else if (choice == 2)
        {
            if(q.length()==0)
            {
                cout << "The updated queue : ";
                q.print();
                cout<<"List is empty"<<endl;      
            }
            else
            {
                int t = q.dequeue();
                cout << "The updated queue : ";
                q.print();
                cout <<  "The dequeued value :" << t<<endl;
            }
       
        }
        else if (choice == 3)
        {
            int t = q.length();
            cout << "The updated queue : ";
            q.print();
            cout <<  "The length of the queue:" << t<<endl;
        }
        else if (choice == 4)
        {
            if(q.length()==0)
            {
                cout << "The updated queue : ";
                q.print();
                cout<<"List is empty"<<endl;      
            }
            else
            {
                int t = q.front();
                cout << "The updated queue : ";
                q.print();
                cout << "The front value :" << t<< endl;
            }
            
        }
        else if (choice == 5)
        {
             if(q.length()==0)
            {
                cout << "The updated queue : ";
                q.print();
                cout<<"List is empty"<<endl;      
            }
            else
            {
                int t = q.back();
                cout << "The updated queue : ";
                q.print();
                cout << "The back value :" << t<< endl;
            }
        }
        else if (choice == 6)
        {
            bool t=q.is_empty();
            cout << "The updated queue : ";
            q.print();
            if(t)
                cout<<"True"<<endl;
            else
                cout<<"False"<<endl;
        }
        else if (choice == 7)
        {
            q.clear();
            cout << "The updated queue : ";
            q.print();
        }
        else 
        {
            cout<<"Wrong option !! Try again ."<<endl;
        }
    }
    return 0;
}