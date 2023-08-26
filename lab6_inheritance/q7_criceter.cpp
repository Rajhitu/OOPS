
/*Q7. Cricketer problem(Multiple  inheritance)*/
#include <iostream>
#include <string.h>
using namespace std;
class batsman
{
    int run_taken_025, half_cen_025, centur_025, high_score_025, no_of_six_025;

public:
    void input_bt(int rt1, int hc1, int c1, int hs1, int ns1)
    {
        run_taken_025 = rt1;
        half_cen_025 = hc1;
        centur_025 = c1;
        high_score_025 = hs1;
        no_of_six_025 = ns1;
    }
    void display_bt()
    {

        cout << "\nrunstaken: " << run_taken_025;
        cout << "\nno. of half centuries: " << half_cen_025;
        cout << "\nno. of centuries: " << centur_025;
        cout << "\nhighest score: " << high_score_025;
        cout << "\ntotal no. of sixes: " << no_of_six_025;
    }
};
class baller
{
    char type_025[5];
    int wik_taken_025, speed_025;

public:
    void input_bl(char *type1, int wt1, int s1)
    {
        strcpy(type_025, type1);
        wik_taken_025 = wt1;
        speed_025 = s1;
    }
    void display_bl()
    {

        cout << "\nballer type_025: " << type_025;
        cout << "\ntotal no. of wickets taken: " << wik_taken_025;
        cout << "\nspeed of baller: " << speed_025 << "km/h";
    }
};
class allrounder : public batsman, public baller
{
    int man_of_match_025, inter_match_025, catches_025, icc_ran_025;

public:
    void input_all(int mm1, int im1, int cat1, int icc1)
    {
        man_of_match_025 = mm1;
        inter_match_025 = im1;
        catches_025 = cat1;
        icc_ran_025 = icc1;
    }
    void display_all()
    {
        cout << "\nno. of man of the match: " << man_of_match_025;
        cout << "\nno. of international matches: " << inter_match_025;
        cout << "\nno. of catches: " << catches_025;
        cout << "\nICC ranking: " << icc_ran_025;
    }
};
int main()
{
    int age, jn, odi, run_taken_025, half_cen_025, centur_025, high_score_025, no_of_six_025, wik_taken_025, speed_025, n, man_of_match_025, inter_match_025, catches_025, icc_ran_025;
    char name[50], type_025[10];

    cout << "\n..................................................\n";
    cout << "For batsman enter\n";
    cout << "\nenter the runstaken,no. of half centuries and centuries,highest score, no.of sixes : ";
    cin >> run_taken_025 >> half_cen_025 >> centur_025 >> high_score_025 >> no_of_six_025;
    cout << "\n..................................................\n";
    cout << "For baller enter\n";
    cout << "\nenter the type_025 of baller,total no. of wickets taken and speed of baller:";
    cin >> type_025 >> wik_taken_025 >> speed_025;
    cout << "\n..................................................\n";
    cout << "For all rounder enter\n";
    cout << "\nenter the no. of man of the match,no. of international matches,no.of catches and ICC ranking: ";
    cin >> man_of_match_025 >> inter_match_025 >> catches_025 >> icc_ran_025;

    allrounder a;

    a.input_bt(run_taken_025, half_cen_025, centur_025, high_score_025, no_of_six_025);
    a.input_bl(type_025, wik_taken_025, speed_025);
    a.input_all(man_of_match_025, inter_match_025, catches_025, icc_ran_025);
    a.display_bt();
    a.display_bl();
    a.display_all();

    return 0;
}