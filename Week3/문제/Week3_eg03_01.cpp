#include <iostream>
#include <string>
using namespace std;

enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
enum class sDays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
string dnames[] {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main(void)
{
    Days day = Days::Mon;
    sDays sday = sDays::Mon;
    
    cout << "today is " << dnames[day] << endl;

    cout << dnames[Days::Mon] << endl;
    cout << Days::Mon + 1 << endl;
    // cout << dnames[sDays::Mon] << endl; it causes error, it is not int
    // cout << sDays::Mon << endl; error, no match for operator <<
    return 0;
}