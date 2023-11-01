#include<iostream>
#include<string>
using namespace std;
int main()
{
	int choice;
	float degree,final=0;
	while (true)
	{
	cout << "!!!!HELLO!!!!\nPLEASE ENTER DEGREE\n";
	cin >> degree;
	cout << "PLEASE ENTER \n1 to convert from fahrenhite to celsius\n2 to convert from celsius to fahrenhite\n";
	cin >> choice;
	switch (choice)
	{
	case 1://from fahrenhite to celsius
		final =  (degree - 32.0) * 5.0 / 9.0;
		break;
	case 2://from celsius to fahrenhite
		final = (1.8 * degree) + 32;
		break;
	default:
		cout << "!!!!!!!!!!ALERT!!!!!!!!!!!!\nWRONG CHOICE\n";
		break;

	}
	if (choice != 1 && choice != 2)
		cout << "WRONG CHOICE" << endl;
	else
	{
		cout << "DEGREE AFTER CONVERSION: " << final << endl;
		break;
	}
}






	return 0;
}