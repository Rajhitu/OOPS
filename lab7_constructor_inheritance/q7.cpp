/*Q7. Cricketer problem(Multiple  inheritance)*/
#include <iostream>
#include<string.h>
using namespace std;
class batsman 
{
    int rt_025, hc_025, c_025, hs_025, ns_025;

public:
     batsman(int rt1, int hc1, int c1, int hs1, int ns1)
    {
        rt_025 = rt1;
        hc_025 = hc1;
        c_025 = c1;
        hs_025 = hs1;
        ns_025 = ns1;
    }
    void display_bt()
    {
        
        cout << "\nrunstaken: " << rt_025;
        cout << "\nno. of half centuries: " << hc_025;
        cout << "\nno. of centuries: " << c_025;
        cout << "\nhighest score: " << hs_025;
        cout << "\ntotal no. of sixes: " << ns_025;
    }
};
class baller 
{
    char type_025[5];
    int wt_025, s_025;

public:
   baller(char *type1, int wt1, int s1)
    {
        strcpy(type_025, type1);
        wt_025 = wt1;
        s_025 = s1;
    }
    void display_bl()
    {
       
        cout << "\nballer type_025: " << type_025;
        cout << "\ntotal no. of wickets taken: " << wt_025;
        cout << "\nspeed of baller: " << s_025 << "km/h";
    }
};
class allrounder : public batsman, public baller
{
    int mm_025, im_025, cat_025, icc_025;

public:
    allrounder(int mm1,int im1,int cat1, int icc1,int rt1, int hc1, int c1, int hs1, int ns1,char *type1, int wt1, int s1):baller(type1,wt1, s1),batsman(rt1, hc1, c1, hs1, ns1)
    {
       mm_025=mm1;
       im_025=im1;
       cat_025=cat1;
       icc_025=icc1; 
    }
    void display_all()
    {
        cout << "\nno. of man of the match: " << mm_025;
        cout << "\nno. of international matches: " << im_025;
        cout << "\nno. of catches: " << cat_025;
        cout << "\nICC ranking: " << icc_025;
    }
};
int main()
{
     int age_025, jn, odi, rt_025, hc_025, c_025, hs_025, ns_025, wt_025, s_025, n,mm_025,im_025,cat_025,icc_025;
    char name[50], type_025[10];

    
     cout<<"\n..................................................\n";
        cout<<"For batsman enter\n";
    cout << "\nenter the runstaken,no. of half centuries and centuries,highest score, no.of sixes : ";
        cin >> rt_025 >> hc_025 >> c_025 >> hs_025 >> ns_025;
         cout<<"\n..................................................\n";
        cout<<"For baller enter\n";
        cout << "\nenter the type_025 of baller,total no. of wickets taken and speed of baller:";
        cin >> type_025 >> wt_025 >> s_025;
        cout<<"\n..................................................\n";
        cout<<"For all rounder enter\n";
        cout << "\nenter the no. of man of the match,no. of international matches,no.of catches and ICC ranking: ";
        cin >> mm_025 >> im_025 >> cat_025 >> icc_025;

        
        
        
        allrounder a(mm_025,im_025,cat_025,icc_025,rt_025, hc_025, c_025, hs_025, ns_025,type_025, wt_025, s_025);
          a.display_bt();
        a.display_bl();
        a.display_all();
    
       
        
        
    a.display_all();
    return 0;
}