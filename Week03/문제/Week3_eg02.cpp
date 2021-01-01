#include <iostream>
#include <string>
using namespace std;

enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
// num Days2 {Mon, Tue, Wed, Thu, Fri, Sat, Sun}; it cause error
enum class sDays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
// enum class sDays2 {Mon, Tue, Wed, Thu, Fri, Sat, Sun}; it doesn't cause error
string dnames[] {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main(void)
{
    Days day = Days::Mon;
    sDays sday = sDays::Mon;
    if (day == 0)
        cout << "today is " << dnames[day] << endl;
    if (sday == sDays::Mon)
        cout << "today is " << dnames[day] << endl;
    return 0;
}