#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int len,widh,area,parameter;
    cin>>len;
    cin>>widh;
    area= len*widh;
    parameter=2*(len+widh);
    cout<< "area is " <<area<<endl;
    cout<< "parameter is " << parameter<<endl;
    return EXIT_SUCCESS;
}
