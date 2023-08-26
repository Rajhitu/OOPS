//Q2.WAP to find volume of a_025 sphere, a_025 cylinder and a_025 cuboid, using function
//overloading.
#include <iostream>
#include <math.h>
using namespace std;

void volume(double r_025)
{

   double volume = 4 / 3.0 * 3.14 * r_025 * r_025 * r_025;
   cout << "\nvolume of sphere is " << volume << " sq.unit\n";
}
void volume(double r_025, double h_025)
{

   double volume = 3.14 * r_025 * r_025 * h_025;
   cout << "\nvolume of cylinder is " << volume << " sq.unit\n";
}
void volume(double a_025, double b_025, double c_025)
{
   double s = (a_025 + b_025 + c_025) / 2;
   double volume = sqrt(s * (s - a_025) * (s - b_025) * (s - c_025));
   cout << "\nvolume of triangle is " << volume << " sq.unit\n";
}

int main()
{

   double r_025, a_025, b_025, c_025, h_025;
   int n_025;

   cout << "\npress 1 to calculate the volume  of sphere"
        << "\npress 2 to calculate the volume  of cylinder"
        << "\npress 3 to calculate the volume  of cuboid\n";
   cin >> n_025;
   switch (n_025)
   {

   case 1:

      cout << "enter the value of radius of sphere";
      cin >> r_025;
      volume(r_025);
      break;

   case 2:
      cout << "enter the value of radius and height of cylinder ";
      cin >> r_025 >> h_025;
      volume(r_025, h_025);
      break;
   case 3:
      cout << "enter the value of 3 sides of triangle ";
      cin >> a_025 >> b_025 >> c_025;
      volume(a_025, b_025, c_025);

   default:
      break;
   }
   return 0;
}