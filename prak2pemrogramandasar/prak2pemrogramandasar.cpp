#include <iostream>
using namespace std;

int main() {
	srand(time(0));


	int nBill = (rand() % 10);
	string status;

	if (nBill % 2 == 0) {
		status = "Genap";
	}
	else {
		status = "Ganjil";
	}
	cout << "Status Bilangan " << status << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
