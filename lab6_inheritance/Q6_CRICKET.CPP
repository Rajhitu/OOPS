/*Q6. Cricketer problem(Hierarchial inheritance)*/
#include <iostream>
#include <string.h>
using namespace std;
class cricketer
{
    char name_025[20];
    int age_025;
    int jursey_no_025;
    int odi_025;

public:
    void input(char *name1, int age1, int jn1, int odi1)
    {
        strcpy(name_025, name1);
        age_025 = age1;
        jursey_no_025 = jn1;
        odi_025 = odi1;
    }
    void display()
    {
        cout << "\nname of cricketer: " << name_025;
        cout << "\nage of cricketer: " << age_025;
        cout << "\njersey no. of cricketer: " << jursey_no_025;
        cout << "\nno. of ODIs played by cricketer: " << odi_025;
    }
};
class batsman : public cricketer
{
    int run_taken_025, half_century_025, century_025, high_score_025, no_of_six_025;

public:
    void input(int rt1, int hc1, int c1, int hs1, int ns1)
    {
        run_taken_025 = rt1;
        half_century_025 = hc1;
        century_025 = c1;
        high_score_025 = hs1;
        no_of_six_025 = ns1;
    }
    void display()
    {
        cricketer::display();
        cout << "\nrunstaken: " << run_taken_025;
        cout << "\nno. of half centuries: " << half_century_025;
        cout << "\nno. of centuries: " << century_025;
        cout << "\nhighest score: " << high_score_025;
        cout << "\ntotal no. of sixes: " << no_of_six_025;
    }
};
class baller : public cricketer
{
    char type_025[5];
    int wiket_taken_025, speed_025;

public:
    void input(char *type1, int wt1, int s1)
    {
        strcpy(type_025, type1);
        wiket_taken_025 = wt1;
        speed_025 = s1;
    }
    void display()
    {
        cricketer::display();
        cout << "\nballer type_025: " << type_025;
        cout << "\ntotal no. of wickets taken: " << wiket_taken_025;
        cout << "\nspeed of baller: " << speed_025 << "km/h";
    }
};
int main()
{
    int age_025, jursey_no_025, odi_025, run_taken_025, half_century_025, century_025, high_score_025, no_of_six_025, wiket_taken_025, speed_025, n;
    char name_025[50], type_025[10];

    batsman bt;
    baller bl;
    cout << "\npress 1 if you have batsman";
    cout << "\npress 2 if you have baller";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "\nfor batsman: ";
        cout << "\nenter the cricketer name,age,jersy number and no. of ODIs played respectively: ";
        cin >> name_025 >> age_025 >> jursey_no_025 >> odi_025;

        cout << "\nenter the runstaken,no. of half centuries and centuries,highest score, no.of sixes : ";
        cin >> run_taken_025 >> half_century_025 >> century_025 >> high_score_025 >> no_of_six_025;
        bt.cricketer::input(name_025, age_025, jursey_no_025, odi_025);
        bt.input(run_taken_025, half_century_025, century_025, high_score_025, no_of_six_025);

        bt.display();

        break;

    case 2:
        cout << "\n\nfor baller: ";
        cout << "\nenter the cricketer'name,age,jersy number and no. of ODIs played respectively: ";
        cin >> name_025 >> age_025 >> jursey_no_025 >> odi_025;

        cout << "\nenter the type_025 of baller,total no. of wickets taken and speed of baller:";
        cin >> type_025 >> wiket_taken_025 >> speed_025;
        bt.cricketer::input(name_025, age_025, jursey_no_025, odi_025);
        bl.input(type_025, wiket_taken_025, speed_025);
        bl.display();

    default:
        break;
    }

    return 0;
}