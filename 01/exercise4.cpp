 #include <iostream>
 
 using namespace std;
 
// Declaration

int main (int argc, char *argv[]) {
	int accountID = 0;
	double balanceThisMonth, costThisMonth, creditThisMonth, creditLimit, newBalance;
	cout << "\t\t\t\tDEPARTMENT STORE CUSTOMER SYSTEM" << endl;
	do {
		cout << "\n\tYOUR ACCOUNT NUMBER: ";
		cin >> accountID;
		if (accountID == -1) {
			break;
		}
		cout << "\n\tBALANCE AT THE BEGINNING OF THE MONTH: ";
		cin >> balanceThisMonth;
		cout << "\n\tTOTAL OF ALL ITEMS CHARGED THIS MONTH: ";
		cin >> costThisMonth;
		cout << "\n\tTOTAL CREDITS APPLIED THIS MONTH: ";
		cin >> creditThisMonth;
		cout << "\n\tCREDIT LIMIT: ";
		cin >> creditLimit;
		newBalance = balanceThisMonth + costThisMonth - creditThisMonth;
		if (newBalance > creditLimit) {
			cout << "\n\tCREDIT LIMIT EXCEEDED!" << endl;
		} else {
			cout << "\n\tYOU HAVE " << creditLimit - newBalance << " REMAINS." << endl;
		}
	} while (1 == 1);
	return 0;
}