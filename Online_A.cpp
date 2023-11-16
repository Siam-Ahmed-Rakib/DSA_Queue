#include "LL.cpp"
int main()
{
    Queue<int> A, B, C;
    while (true)
    {
        int choice;
        cout << "1.enter" << endl;
        cout << "2.approve" << endl;
        cout << "3.reject" << endl;
        cout << "4.terminate" << endl;
        cin >> choice;
        if (choice == 1)
        {
            int n;
            cout << "enter ";
            cin >> n;
            if (B.length() <= C.length())
            {
                B.enqueue(n);
                cout << "Customer " << n << " enters queue B" << endl;
            }
            else
            {
                C.enqueue(n);
                cout << "Customer " << n << " enters queue C" << endl;
            }
        }
        if (choice == 2)
        {
            char ch;
            cin >> ch;
            if (ch == 'B')
            {
                if (B.is_empty())
                {
                    cout << "Queue B was already empty" << endl;
                }
                else
                {
                    int d = B.dequeue();
                    A.enqueue(d);
                    cout << "Customer " << d << " enters queue A" << endl;
                }
            }
            else if (ch == 'C')
            {
                if (C.is_empty())
                {
                    cout << "Queue C was already empty" << endl;
                }
                else
                {
                    int d = C.dequeue();
                    A.enqueue(d);
                    cout << "Customer " << d << " enters queue A" << endl;
                }
            }
            else if (ch == 'A')
            {
                if (A.is_empty())
                {
                    cout << "Queue A was already empty" << endl;
                }
                else
                {
                    int d = A.dequeue();
                    cout << "Customer " << d << " gets the loan" << endl;
                }
            }
        }
        if (choice == 3)
        {
            char ch;
            cin >> ch;
            if (ch == 'B')
            {
                if (B.is_empty())
                {
                    cout << "Queue B was already empty" << endl;
                }
                else
                {
                    int d = B.dequeue();
                    if (B.length() >= C.length())
                    {
                        B.enqueue(d);
                        cout << "Customer " << d << " enters queue B" << endl;
                    }
                    else
                    {
                        C.enqueue(d);
                        cout << "Customer " << d << " enters queue C" << endl;
                    }
                }
            }
            else if (ch == 'C')
            {
                if (C.is_empty())
                {
                    cout << "Queue C was already empty" << endl;
                }
                else
                {
                    int d = C.dequeue();
                    if (B.length() >= C.length())
                    {
                        B.enqueue(d);
                        cout << "Customer " << d << " enters queue B" << endl;
                    }
                    else
                    {
                        C.enqueue(d);
                        cout << "Customer " << d << " enters queue C" << endl;
                    }
                }
            }
        }
        if (choice == 4)
        {
            break;
        }
    }
    return 0;
}