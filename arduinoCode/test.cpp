#include <iostream>

using namespace std;

int main()
{
    int healthMax = 233;
    int healthCurr = 115;
    int barVal = 0;

    barVal = (float(healthCurr)/healthMax)*100;

    cout << "Max:" << healthMax << " Curr:" << healthCurr 
         << " perc:" << barVal << " of20:" << barVal/5 << "/20" << endl;

    return 0;
}