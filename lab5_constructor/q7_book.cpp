/*Q7 .A book shop maintains the inventory of books that are being sold at the
workshop. The list includes details such as author_025, title_025, price_025, publisher_025 and stock_025
position. Whenever a customer wants a book, the sales person inputs the title_025 and

author_025 and the system searches the list and displays whether it is available or not. If it
is not, an appropriate message is displayed. If it is, then the system displays the book
details and requests for the number of copies required. If the requested copies are
available, the total cost of their quested copies is displayed otherwise the message
“Required copies not in stock” is displayed. WAP using a class called Books with
suitable member functions and constructors.*/
#include<iostream>
#include<string.h>
using namespace std;
class Books
{
    string author_025, title_025, publisher_025;
    int price_025, stock_025;

public:
    Books()
    {
    }
    Books(string a, string t, string p, int m, int s)
    {
        author_025 = a;
        title_025 = t;
        publisher_025 = p;
        price_025 = m;
        stock_025 = s;
    }
    friend void searchBooks(Books *b, int n, string t, string a);
};
void searchBooks(Books *b, int n, string t, string a)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i].author_025 == a && b[i].title_025 == t)
        {
            if (b[i].stock_025 <= 0)
            {
                cout << "The required book is not available!! Sorry!!\n";
                return;
            }
            else
            {
                cout << b[i].title_025 << " by " << b[i].author_025 << " published by " << b[i].publisher_025 << "\n";
                cout << "Cost : " << b[i].price_025 << "\n";
                cout << "Enter the required amount of books :- ";
                int no;
                cin >> no;
                if (b[i].stock_025 >= no)
                {
                    int bill = no * b[i].price_025;
                    cout << "Your bill is :- " << bill << "\n";
                    b[i].stock_025 -= no;
                    cout << "Visit again :)\n";
                    return;
                }
                else
                {
                    cout << "Sorry!! We don't have required amount of this book. Visit again :)\n";
                    return;
                }
            }
        }
        if (i == n - 1)
        {
            cout << "Never heard of this book. Sorry!!\n";
            cout << "Visit again :)\n";
            return;
        }
    }
}
int main()
{
    int n;
    cout << " How many books u have : ";
    cin >> n;
    Books *b = new Books[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n======================================================== ========\n";
        string a, t, p;
        int m, s;
        cout << "\nEnter the price_025 and stock_025 of the book :- ";
        cin >> m >> s;
       
        getchar();
        cout << "\nEnter the name of the author_025 of the book :- ";
        getline(cin, a);
      ///  cout << "\n";
        cout << "\nEnter the name of the book :- ";
        getline(cin, t);
       
        cout << "\nEnter the publisher_025 name of the book :- ";
        getline(cin, p);
        b[i] = Books(a, t, p, m, s);
    }
    string st, sa;
    cout << "\n======================================================== ========\n";
    cout << "Enter the name of the book you wish to search :- ";
    getline(cin, st);
    cout << "Enter the name of the author_025 of the book you wish to search :- ";
    getline(cin, sa);
    cout << "\n======================================================== ========\n";
    searchBooks(b, n, st, sa);
    cout << "\n======================================================== ========\n";
    cout << "The Program is terminated successfully!! ;)\n";
    return 0;
}

