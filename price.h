float price(int price)
{
	int type;
repeat:
	cout << "------------------------------------" << endl;
	cout << setw(24) << "Passenger Type" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(23) << "[1] Regular" << endl;
	cout << setw(34) << "[2] Student, PWD, Senior Citizen" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select Passenger Type: ", cin >> type;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease Select [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto repeat;
	}

	switch (type) {
	case 1: return price;
		break;

	case 2: return price - (price * 0.2);
		break;
	default: cout << "\nPlease select [1] or [2]\n\n"; goto repeat;
		break;
	}

	return 0;
}