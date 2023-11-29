using namespace std;

int admin() {

	int id, idrecord = 123, tries = 3, admin_function, price{};
	string pass, emppass = "pass";

	cout << "------------------------------------" << endl;
	cout << setw(30) << "Bus Ko Po Transit Inc." << endl;
	cout << "------------------------------------" << endl;
	cout << setw(23) << "Admin Login" << endl;
	cout << "------------------------------------" << endl;
	do {
		cout << "Enter Employee ID: ", cin >> id;
		cout << "Enter Password: ", cin >> pass;
		cout << "------------------------------------" << endl;
		if ((id == idrecord) && (pass == emppass))
		{
			tries = 0;
			cout << setw(25) << "[1] Update Prices" << endl;
			cout << setw(30) << "[2] Back to Main Menu\n" << endl;
			cout << "Enter Function: ", cin >> admin_function;

			switch (admin_function) {
			case 1: cout << "\nEnter Updated Original Price: ", cin >> price;
				break;
			case 2: system("CLS"); return price;
				break;
			}
		}
		else
		{
			cout << setw(22) << "Error!\n" << endl;

			tries--;
		}

		if (tries == 0) {
			cout << setw(35) << "Error, going back to main menu..." << endl;
			cin.get();
			return price;
		}
	} while (tries > 0);

	return price;

}