#include <iostream>
using namespace std;
int main( )
{
    for (int k =0; k<86400; ++k)
    {
        int h, m, s=k;

        m=s/60;
        s=s%60;

        h=m/60;
        m=m%60;
        cout << h<< " : " << m << " : " <<s << "  " ;
    }


}
