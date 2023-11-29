void receipt(string name, string place, string time, int seat, int price) {

	string type;

	cout << "------------------------------------" << endl;
	cout << setw(30) << "Bus Ko Po Transit Inc." << endl;
	cout << setw(28) << "TRANSACTION SUMMARY" << endl;
	cout << "------------------------------------\n" << endl;
	cout << "Ticket Buyer: " << setw(21) << name << endl;
	cout << "Destination: " << setw(22) << place << endl;
	cout << "Departure Time: " << setw(19) << time << endl;
	cout << "Seat: " << setw(29) << seat << endl;

	if (price == 84) {
		type = "Student/PWD/Senior";
	}
	else {
		type = "Regular";
	}

	cout << "Passenger Type: " << setw(19) << type << endl;
	cout << "Price: " << setw(28) << price << endl;

	cout << '\n' << setw(31) << "Please present your ID and" << endl;
	cout << setw(33) << "this receipt to the cashier.\n" << endl;
	cout << setw(30) << "Your reference number is" << endl;
	cout << setw(19) << rand() % 900 + 100 << endl;

	cout << "------------------------------------" << endl;
	cout << setw(32) << "Press Enter To Continue..." << endl;
	cin.get();
	
	return;
}