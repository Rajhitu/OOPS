//Q9) (Class Template) Design a generic stack class which can be used to
// create integer, character or floating point stack objects. 
//Provide all necessary data members and member functions 
//(push, pop, display &amp; default constructor) to operate on the stack.

#include <bits/stdc++.h>
 using namespace std;
template <class T_025>
class Stack_025
{
private:
    int top_025;
    int capacity_025;
    T_025 *array_025;

public:
    T_025 last_pop_025;
    Stack_025(int capacity_025)
    {
        this->capacity_025 = capacity_025;
        top_025 = -1;
        array_025 = new T_025[capacity_025];
        last_pop_025 = -9999;
    }
    void push_025(T_025 element_025)
    {
        if (top_025 == capacity_025 - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top_025++;
        array_025[top_025] = element_025;
    }
    void pop_025()
    {
        if (top_025 == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        int temp_025 = top_025--;
        last_pop_025 = array_025[temp_025];
        cout << "Popped Element - " << last_pop_025 << endl;
    }
    void display_025()
    {
        if (top_025 == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "Stack Element: " << endl;
        for (int i_025 = top_025; i_025 >= 0; i_025--)
        {
            cout << array_025[i_025] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int choice_025, n_025;
    cout << "Enter the size of the stack: ";
    cin >> n_025;
    cout << "Enter 1 for Char Stack." << endl;
    cout << "Enter 2 for Integer Stack." << endl;
    cout << "Enter 3 for Float Stack." << endl;
    cout << "Enter Your Choice - ";
    cin >> choice_025;
    switch (choice_025)
    {
    case 1:
    {
        Stack_025<char> s_025(n_025);
        char element_025;
        while (1)
        {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter Your Choice - ";
            cin >> choice_025;
            switch (choice_025)
            {
            case 1:
            {
                cout << "Enter the element to be pushed - ";
                cin >> element_025;
                s_025.push_025(element_025);
                break;
            }
            case 2:
            {
                s_025.pop_025();
                break;
            }
            case 3:
            {
                s_025.display_025();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout << "Wrong Choice" << endl;
            }
            }
        }
    }
    break;
    case 2:
    {
        Stack_025<int> s_025(n_025);
        int element_025;
        while (1)
        {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter Your Choice - ";
            cin >> choice_025;
            switch (choice_025)
            {
            case 1:
            {
                cout << "Enter the element to be pushed - ";
                cin >> element_025;
                s_025.push_025(element_025);
                break;
            }
            case 2:
            {
                s_025.pop_025();
                break;
            }
            case 3:
            {
                s_025.display_025();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout << "Wrong Choice" << endl;
            }
            }
        }
    }
    break;
    case 3:
    {
        Stack_025<float> s_025(n_025);
        float element_025;
        while (1)
        {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter Your Choice - ";
            cin >> choice_025;
            switch (choice_025)
            {
            case 1:
            {
                cout << "Enter the element to be pushed - ";
                cin >> element_025;
                s_025.push_025(element_025);
                break;
            }
            case 2:
            {
                s_025.pop_025();
                break;
            }
            case 3:
            {
                s_025.display_025();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                cout << "Wrong Choice" << endl;
            }
            }
        }
    }
    default:
        cout << "Wrong Choice" << endl;
    }
    return 0;
}