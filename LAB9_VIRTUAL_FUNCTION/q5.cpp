//q5.Also do the media class as base class and book and tape as derived class
//program too, as discussed in the theory class.
#include <bits/stdc++.h>

using namespace std;

class media

{

protected:
    char name[20];

    int price;

public:
    media(const char *n, int p)

    {

        strcpy(name, n);

        price = p;
    }

    virtual void display()

    {
    }
};

class book : public media

{

    int pages;

public:
    book(const char *n, int p, int pa) : media(n, p)

    {

        pages = pa;
    }

    void display()

    {

        cout << "\ntitle of book: " << name;

        cout << "\nprice of book: " << price;

        cout << "\npages of book: " << pages;
    }
};

class tape : public media

{

    int time_;

public:
    tape(const char *n, int p, int t) : media(n, p)

    {

        time_ = t;
    }

    void display()

    {

        cout << "\n\ntitle of book: " << name;

        cout << "\nprice of book: " << price;

        cout << "\nplay time of book: " << time_ << " minutes";
    }
};

int main()

{

    book b("C", 450, 700);

    tape t("C++", 485, 90);

    media *m[2];

    m[0] = &b;

    m[0]->display();

    m[1] = &t;

    m[1]->display();

    return 0;
}
