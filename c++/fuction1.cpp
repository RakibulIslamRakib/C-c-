#include <iostream>
using namespace std;
int inputInt();
void outputInt(int number);

int main()
{
    int a= inputInt();
    outputInt(a);
    return 0;
}
int inputInt()
{
    int number;
    cout << "number?";
    cin >> number;
    return number;
}
void outputInt(int number)
{
    cout << "number =";
    cout << number << endl;

}
