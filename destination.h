using namespace std;
string destination() {

	string place;
	int destination;
	string cubao, gp;

repeat:

	cout << "------------------------------------" << endl;
	cout << setw(23) << "DESTINATIONS" << endl;
	cout << "------------------------------------" << endl;

	cout << setw(20) << "[1] Cubao" << endl;
	cout << setw(25) << "[2] Grace Park" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Select Destination: ", cin >> destination;

	cubao = "Cubao";
	gp = "Grace Park";

	if (cin.fail()) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "\nPlease enter [1] or [2]" << endl;
		cout << "\nPress Enter to continue...";
		cin.get();
		system("cls");
		goto repeat;
	}

	switch (destination) {
	case 1: return cubao;
		break;
	case 2: return gp;
		break;
	default: cout << "\nPlease choose between [1] or [2]\n" << endl;
		cin.get();

		goto repeat;
	}



}