#include <iostream>
#include <string>
using namespace std;

int main() {
	string setning;
	cout << "Skriv ei setning: ";
	getline (std::cin, setning);
	cout << "Du skrev: " << setning;
	return 0;
}