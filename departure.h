using namespace std;
string departure() {

	int time;
dept:

	cout << "------------------------------------" << endl;
	cout << setw(25) << "DEPARTURE TIME" << endl;
	cout << "------------------------------------" << endl;
	cout << setw(27) << "[1] 9:00 AM (BUS 1)" << endl;
	cout << setw(27) << "[2] 3:00 PM (BUS 2)" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select time: ", cin >> time;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease enter [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto dept;
	}

	switch (time) {
	case 1: return "9:00 AM";
		break;

	case 2: return "3:00 PM";
		break;

	default: cout << "\nPlease choose between [1] or [2]\n" << endl;
		cin.get();
		goto dept;
		break;
	}
}
