#include <iostream>
#include <string>
using namespace std;

enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
enum class sDays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
string dnames[] {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

const sDays sDays_1[] = {sDays::Mon, sDays::Tue, sDays::Wed, sDays::Thu, sDays::Fri, sDays::Sat, sDays::Sun};
int main(void)
{
    Days day = Days::Mon;
    sDays sday = sDays::Mon;
    
    cout << "today is" << dnames[day] << endl;
    for (auto d : sDays_1)
    {
        if (d == sDays::Wed)
        {
            cout << "wednesday";
        }
    }
    return 0;
}