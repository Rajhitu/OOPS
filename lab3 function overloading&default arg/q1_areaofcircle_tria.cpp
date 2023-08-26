// Q1. WAP to find area of a_025 circle, a_025 rectangle and a_025 triangle, using concept of
//function overloading.
#include <iostream>
#include <math.h>
using namespace std;

void area(double r_025)
{

  double area = 3.14 * r_025 * r_025;
  cout << "\narea of circle is " << area << "sq.unit\n";
}
void area(double l_025, double b_025)
{

  double area = l_025 * b_025;
  cout << "\narea of rect is " << area << "sq.unit\n";
}
void area(double a_025, double b_025, double c_025)
{
  double s = (a_025 + b_025 + c_025) / 2;
  double area = sqrt(s * (s - a_025) * (s - b_025) * (s - c_025));
  cout << "\narea of triangle is " << area << "sq.unit\n";
}

int main()
{
  double r_025, a_025, b_025, c_025, l_025,br_025;
  int n_025;

  cout << "\npress 1 to calculate the area of circle"
       << "\npress 2 to calculate the area of reactangle"
       << "\npress 3 to calculate the area of triangle";
  cin >> n_025;
  switch (n_025)
  {

  case 1:
    
    cout << "enter the value of radius";
    cin >> r_025;
    area(r_025);
    break;

  case 2:
    cout << "enter the length and breath";
    cin >> l_025 >>br_025;
    area(l_025,br_025);
    break;
  case 3:
    cout << "enter the length of the 3 sides";
    cin>>a_025>>b_025>>c_025;
    area(a_025, b_025, c_025);

  default:
    break;
  }

  return 0;
}