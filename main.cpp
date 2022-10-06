// Complete the following program. 
#include <iostream>
using namespace std;

int main()
{
	const double rate1 = 1.10;
	const double rate2 = 2.20;
	const double rate3 = 3.70;
	const double rate4 = 4.80;
	double total_charge;
	double weight, distance, rate, dRate;

	
        // **********************
        // Your code 
        // **********************
         cout << "Enter the package weight and distance\n";
        cin >> weight >> distance;
        //? Input Validation
        if ((weight < 0) && (weight > 20))
        {
                cout << "The package weight must be a positive number and less than 20.\n";
                exit(0);
        }

        if (weight < 2)
                dRate = rate1;
        else if (weight < 6)
                dRate = rate2;
        else if (weight < 10)
                dRate = rate3;
        else if (weight <= 20)
                dRate = rate4;
        else
        {
                cout << "The weight must be less than 20\n";
                exit(0);
        }

        if (distance < 500)
                total_charge = dRate;
        else
                total_charge = (distance / 500.0) * dRate;
	cout << total_charge << endl;
}
