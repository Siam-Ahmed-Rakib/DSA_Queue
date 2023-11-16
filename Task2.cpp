#include "Stack.cpp"
int main()
{
        Stack<int> stk;
        while (true)
        {
            int choice;
            cout << "0.Exit" << endl;
            cout << "1.Clear" << endl;
            cout << "2.Push" << endl;
            cout << "3.Pop" << endl;
            cout << "4.Length" << endl;
            cout << "5.TopValue" << endl;
            cout << "6.IsEmpty" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 0)
            {
                break;
            }
            else if (choice == 1)
            {
                stk.clear();
                cout << "The updated stack : ";
                cout << endl;
                stk.print();
            }
            else if (choice == 2)
            {
                int c;
                cout << "Enter the element : ";
                cin >> c;
                stk.push(c);
                cout << endl;
                cout << "The updated stack : ";
                stk.print();
            }
            else if (choice == 3)
            {
                if (stk.isEmpty())
                {
                    cout << "Stack underflow " << endl;
                    cout << "The updated stack : ";
                    stk.print();
                }
                else
                {
                    cout << endl;
                    int a = stk.pop();
                    cout << "The updated stack : ";
                    stk.print();
                    cout << "The popped element : " << a << endl;
                }
            }
            else if (choice == 4)
            {
                cout << endl;
                cout << "The updated stack : ";
                stk.print();
                cout << "The length : " << stk.length() << endl;
            }
            else if (choice == 5)
            {
                cout << endl;
                cout << "The updated stack : ";
                stk.print();
                if (stk.isEmpty())
                {
                    cout << "Stack underflow " << endl;
                }
                else
                    cout << "The top element : " << stk.topValue() << endl;
            }
            else if (choice == 6)
            {
                cout << endl;
                cout << "The updated stack : ";
                stk.print();
                if (stk.isEmpty())
                    cout << "True" << endl;
                else
                    cout << "False" << endl;
            }
            else
            {
                cout << "Wrong option !! Try again." << endl;
            }
        }
    
    
    return 0;
}