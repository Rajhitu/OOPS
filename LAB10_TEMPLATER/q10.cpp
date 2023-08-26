/*Q10) (Class Template) Design a template Stack which can
 work with either a Student record or an Employee record.
  [A Student record contains name, rollNo and cgpa.
   An Employee record contains name, empId and salary fields.
    Provide push, pop, display functions to the template stack class.]*/

#include <bits/stdc++.h>
using namespace std;
class Employee_025
{
private:
    string name_025;
    int id_025;
    int salary_025;

public:
    Employee_025()
    {
        name_025 = "";
        id_025 = 0;
        salary_025 = 0;
    }
    Employee_025(string name_025, int id_025, int salary_025)
    {
        this->name_025 = name_025;
        this->id_025 = id_025;
        this->salary_025 = salary_025;
    }
    void display_025()
    {
        cout << "Name: " << name_025 << endl;
        cout << "ID: " << id_025 << endl;
        cout << "Salary: " << salary_025 << endl;
    }
};
class Student_025
{
private:
    string name_025;
    int rollno_025;
    int cgpa_025;

public:
    Student_025()
    {
        name_025 = "";
        rollno_025 = 0;
        cgpa_025 = 0;
    }
    Student_025(string name_025, int rollno_025, int cgpa_025)
    {
        this->name_025 = name_025;
        this->rollno_025 = rollno_025;
        this->cgpa_025 = cgpa_025;
    }
    void display_025()
    {
        cout << "Name: " << name_025 << endl;
        cout << "Roll No: " << rollno_025 << endl;
        cout << "CGPA: " << cgpa_025 << endl;
    }
};
template <class T_025>
class stack_025
{
private:
    T_025 *arr_025;
    int top_025;
    int capacity_025;

public:
    T_025 last_pop_025;
    stack_025(int capacity_025)
    {
        this->capacity_025 = capacity_025;
        arr_025 = new T_025[capacity_025];
        top_025 = -1;
    }
    void push_025(T_025 ele_025)
    {
        if (top_025 == capacity_025 - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr_025[++top_025] = ele_025;
    }
    void pop_025()
    {
        if (top_025 == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        last_pop_025 = arr_025[top_025--];
    }
    void display_025()
    {
        if (top_025 == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        for (int i_025 = top_025; i_025 >= 0; i_025--)
        {
            arr_025[i_025].display_025();
        }
    }
};
int main()
{
    int choice_025;
    while (1)
    {
        cout << "1. Employee" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice_025;
        switch (choice_025)
        {
        case 1:
        {
            cout << "Enter the size of the stack: ";
            int size_025;
            cin >> size_025;
            stack_025<Employee_025> s_025(size_025);
            choice_025 = 0;
            while (choice_025 != 4)
            {
                cout << "1 - Push Element to Stack.\n";
                cout << "2 - Pop Element from Stack.\n";
                cout << "3 - Display Stack.\n";
                cout << "4 - Exit.\n";
                cout << "Enter your choice: ";
                cin >> choice_025;
                switch (choice_025)
                {
                case 1:
                {
                    string name_025;
                    int id_025, salary_025;
                    cout << "Enter the name: ";
                    cin >> name_025;
                    cout << "Enter the id: ";
                    cin >> id_025;
                    cout << "Enter the salary: ";
                    cin >> salary_025;
                    s_025.push_025(Employee_025(name_025, id_025, salary_025));
                    break;
                }
                case 2:
                {
                    cout << "Popped Element - ";
                    s_025.pop_025();
                    s_025.last_pop_025.display_025();
                    break;
                }
                case 3:
                {
                    cout << "Stack : " << endl;
                    s_025.display_025();
                    break;
                }
                case 4:
                {
                    break;
                }
                default:
                {
                    cout << "Invalid Choice" << endl;
                }
                }
            }
        }
        break;
        case 2:
        {
            cout << "Enter the size of the stack: ";
            int size_025;
            cin >> size_025;
            stack_025<Student_025> s_025(size_025);
            choice_025 = 0;
            while (choice_025 != 4)
            {
                cout << "1 - Push Element to Stack.\n";
                cout << "2 - Pop Element from Stack.\n";
                cout << "3 - Display Stack.\n";
                cout << "4 - Exit.\n";
                cout << "Enter your choice: ";
                cin >> choice_025;
                switch (choice_025)
                {
                case 1:
                {
                    string name_025;
                    int rollno_025, cgpa_025;
                    cout << "Enter the name: ";
                    cin >> name_025;
                    cout << "Enter the rollno: ";
                    cin >> rollno_025;
                    cout << "Enter the cgpa: ";
                    cin >> cgpa_025;
                    s_025.push_025(Student_025(name_025, rollno_025, cgpa_025));
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
                    break;
                }
                default:
                {
                    cout << "Invalid Choice" << endl;
                }
                }
            }
        }
        break;
        case 3:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    }
    return 0;
}