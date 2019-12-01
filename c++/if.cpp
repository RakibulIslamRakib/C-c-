#include <iostream>

using namespace std;

void ShowPersonalDetails()
{
    cout << "Name: Forhad hossain" << endl;
    cout << "Address: Patuakhali, Bangladesh" << endl;
}
void ShowAcademicDetails()
{
    cout << "Primary: First Division, 2007" << endl;
    cout << "Secondary: First Division, 2013" << endl;
}
void ShowExperienceDetails()
{
    cout << "Debating : Champian, Bogra District" << endl;
    cout << "Carrom : Champion, Intra-School" <<endl;
}
int main()
{
    cout << "Curriculum Vitae" <<endl;
    ShowPersonalDetails();
    ShowAcademicDetails();
    ShowExperienceDetails();

    return 0;
}
