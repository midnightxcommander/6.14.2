#include <iostream>

#include <iomanip>
#include <cmath>



using namespace std;

using std::setw;

using std::setprecision;

using std::ios;

using std::endl;

const float Cost_Per_Unit_1 = 75.99;

const float Cost_Per_Unit_2 = 8.90;

const float Cost_Per_Unit_3 = 4.95;

const float Cost_Per_Unit_4 = 12.95;

const float Cost_Per_Unit_5 = 22.00;



int main()

{



     float  Total_Cost1, Total_Cost2, Total_Cost3, Total_Cost4, Total_Cost5, Overallcost;

    int Quanity_1 = 25;

    int Quanity_2 = 100;

    int Quanity_3 = 25;

    int Quanity_4 = 20;

    int Quanity_5 = 100;







    cout << "Description- \t -Cost Per Unit in $- \t  -Quantity Needed- \t -Total Cost- \n";

    Total_Cost1 = Quanity_1 * Cost_Per_Unit_1;

    cout << "Joists" << setw(18) << Cost_Per_Unit_1 << setw(25) << Quanity_1 << setw(25) << Total_Cost1 << '\n';

    Total_Cost2 = Quanity_2 * Cost_Per_Unit_2;

    cout << "2x6" << setw(20) << Cost_Per_Unit_2 << setw(26) << Quanity_2 << setw(22) << Total_Cost2 << '\n';

    Total_Cost3 = Quanity_3 * Cost_Per_Unit_3;

    cout << "2x4" << setw(21) << Cost_Per_Unit_3 << setw(25) << Quanity_3 << setw(25) << Total_Cost3 << '\n';

    Total_Cost4 = Quanity_4 * Cost_Per_Unit_4;

    cout << "4x4" << setw(21) << Cost_Per_Unit_4 << setw(25) << Quanity_4 << setw(22) << Total_Cost4 << '\n';

    Total_Cost5 = Quanity_5 * Cost_Per_Unit_5;

    cout << "4x8 Sheet Plywood" << setw(4) << Cost_Per_Unit_5 << setw(28) << Quanity_5 << setw(22) << Total_Cost5 << '\n';



    Overallcost = Total_Cost5 + Total_Cost2 + Total_Cost4 + Total_Cost3 + Total_Cost1;

    cout << "Overall cost of the supplies :\t";

    cout << Overallcost << endl;







    return 0;



}