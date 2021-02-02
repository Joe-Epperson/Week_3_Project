#include <iostream>
#include <string>
using namespace std;

int main()
{
	const double CHILDREN_PRICE = 10.95;
	const double ADULTS_PRICE = 19.99;
	const double SENIOR_PRICE = 18.99;
	const double VIP_PRICE = 7.99;
	int selectionNum = 0;
	int childNum;
	int adultNum;
	int seniorNum;
	int vipNum;
	double childTotal;
	double adultTotal;
	double seniorTotal;
	double vipTotal;
	double dailyTotal;
	double entireTotal = 0.0;
	char ticketSelect = 'f';


	cout << "Welcome to Fun Park Menu System!" << endl;
	cout << endl;

	for (int i = 1; i <= 3; ++i)
	{
		cout << "Starting Day " << i << endl;
		cout << endl;
		// Initializing variables for each day
		ticketSelect = 'f';
		childNum = 0;
		adultNum = 0;
		seniorNum = 0;
		vipNum = 0;
		childTotal = 0.0;
		adultTotal = 0.0;
		seniorTotal = 0.0;
		vipTotal = 0.0;
		dailyTotal = 0.0;

		while (ticketSelect != 'Q')
		{
			cout << endl;
			cout << "Enter (C)hild, (A)dult, (S)enior, (V)IP, or (Q)uit : ";
			cin >> ticketSelect;
			ticketSelect = toupper(ticketSelect);
			cout << endl;

			switch (ticketSelect)
			{
			case 'C':
				cout << "How many children? ";
				cin >> selectionNum;
				childNum += selectionNum;
				break;

			case 'A':
				cout << "How many adults? ";
				cin >> selectionNum;
				adultNum += selectionNum;
				break;

			case 'S':
				cout << "How many seniors? ";
				cin >> selectionNum;
				seniorNum += selectionNum;
				break;

			case 'V':
				cout << "How many VIP's? ";
				cin >> selectionNum;
				vipNum += selectionNum;
				break;

			case 'Q':
				//Outputting the day
				cout << "Day " << i << endl;
				cout << endl;
				// Calculations
				childTotal = childNum * CHILDREN_PRICE;
				adultTotal = adultNum * ADULTS_PRICE;
				seniorTotal = seniorNum * SENIOR_PRICE;
				vipTotal = vipNum * VIP_PRICE;
				dailyTotal = childTotal + adultTotal + seniorTotal + vipTotal;
				entireTotal += dailyTotal;
				//Outputting each cost individually
				cout << childNum << " children at $" << CHILDREN_PRICE << " = $" << childTotal << endl;
				cout << adultNum << " adults at $" << ADULTS_PRICE << " = $" << adultTotal << endl;
				cout << seniorNum << " seniors at $" << SENIOR_PRICE << " = $" << seniorTotal << endl;
				cout << vipNum << " VIP's at $" << VIP_PRICE << " = $" << vipTotal << endl;
				cout << endl;
				cout << "Total = $" << dailyTotal << endl;
				cout << endl;
				break;

			default:
				cout << "Please enter C, A, S, V, or Q" << endl;
				cout << endl;
				break;
			}
		}
	}

	cout << "The total for all three days is $" << entireTotal;

	return 0;

}