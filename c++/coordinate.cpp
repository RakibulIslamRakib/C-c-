#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float x1, y1, x2, y2;
    cout << "First point of X & Y:" ;
    cin >> x1>>y1 ;
    cout << "second point of X & Y:" ;
    cin >> x2>>y2;
    float dx = abs(x1-x2);
    float dy = abs (y1-y2);

    float dd = sqrt(dx*dx + dy*dy);
    cout << "distance :" << dd<<endl;
}
