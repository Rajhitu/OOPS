/*Q7 Create a class which stores x_025 and y_025 coordinates of a point. Calculate
distance between two given points and display_025 it.

*/
#include <iostream>
#include <math.h>
using namespace std;

class dist
{
  int x_025, y_025;

public:
  void input()
  {

    cout << "enter the coordinates ";
    cin >> x_025 >> y_025;
  }
  double point(dist b)
  {
    double dis = sqrt(pow((x_025 - b.x_025), 2) + pow((y_025 - b.y_025), 2));
    return dis;
  }
}d[2];


int main()
{   

  for (int i = 0; i < 2; i++)
  {
    d[i].input();
  }
  cout <<"\n Distance b/w the 2 coordinates is "<< d[0].point(d[1]);

  return 0;
}
