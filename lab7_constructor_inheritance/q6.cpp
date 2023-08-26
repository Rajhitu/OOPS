/*Q6. Cricketer problem(Hierarchial inheritance)*/
#include <iostream>
#include <string.h>
using namespace std;
class cricketer
{
protected:
    char name[20];
    int age;
    int jn;
    int odi;

public:
    cricketer(char *name1, int age1, int jn1, int odi1)
    {
        strcpy(name, name1);
        age = age1;
        jn = jn1;
        odi = odi1;
    }
    void display()
    {
        cout << "\nname of cricketer: " << name;
        cout << "\nage of cricketer: " << age;
        cout << "\njersey no. of cricketer: " << jn;
        cout << "\nno. of ODIs played by cricketer: " << odi;
    }
};
class batsman : public cricketer
{
protected:
    int rt, hc, c, hs, ns;

public:
    batsman(int rt1, int hc1, int c1, int hs1, int ns1, char *name1, int age1, int jn1, int odi1) : cricketer(name1, age1, jn1, odi1)
    {
        rt = rt1;
        hc = hc1;
        c = c1;
        hs = hs1;
        ns = ns1;
    }
    void display()
    {
        cricketer::display();
        cout << "\nrunstaken: " << rt;
        cout << "\nno. of half centuries: " << hc;
        cout << "\nno. of centuries: " << c;
        cout << "\nhighest score: " << hs;
        cout << "\ntotal no. of sixes: " << ns;
    }
};
class baller : public cricketer
{
protected:
    char type[5];
    int wt, s;

public:
    baller(char *type1, int wt1, int s1, char *name1, int age1, int jn1, int odi1) : cricketer(name1, age1, jn1, odi1)
    {
        strcpy(type, type1);
        wt = wt1;
        s = s1;
    }
    void display()
    {
        cricketer::display();
        cout << "\nballer type: " << type;
        cout << "\ntotal no. of wickets taken: " << wt;
        cout << "\nspeed of baller: " << s << "km/h";
    }
};
int main()
{
    int age, jn, odi, rt, hc, c, hs, ns, wt, s, n;
    char name[50], type[10];

    cout << "\npress 1 if you have batsman";
    cout << "\npress 2 if you have baller";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "\nfor batsman: ";
        cout << "\nenter the cricketer's name,age,jersy number and no. of ODIs played respectively: ";
        cin >> name >> age >> jn >> odi;

        cout << "\nenter the runstaken,no. of half centuries and centuries,highest score, no.of sixes : ";
        cin >> rt >> hc >> c >> hs >> ns;

        batsman bt(rt, hc, c, hs, ns, name, age, jn, odi);

        bt.display();
    
    break;
    }

    case 2:
    
    {
        cout << "\n\nfor baller: ";
        cout << "\nenter the cricketer's name,age,jersy number and no. of ODIs played respectively: ";
        cin >> name >> age >> jn >> odi;

        cout << "\nenter the type of baller,total no. of wickets taken and speed of baller:";
        cin >> type >> wt >> s;

        baller bl(type, wt, s, name, age, jn, odi);
        bl.display();
    }
default:
    break;
}

return 0;
}