#include <iostream>
#include <string>
using namespace std;

int meny(int alternativer);

//Definerer variablene
float celsius;
float fahrenheit;
float km;
float miles;

//funksjon for convertere celsius til fahrenheit
void celsius_to_fahrenheit() {
	cout << "Skriv Celsius: ";
	cin >> celsius;
	fahrenheit=(celsius*1.8)+32;
	cout << celsius << " grader celsius er " << " er " << fahrenheit << " grader fahrenheit \n";
}

//funksjon for Fahrenheit til Celsius
void fahrenheit_to_celsius() {
	cout << "Skriv Fahrenheit: ";
	cin >> fahrenheit;
	celsius=(fahrenheit-32)/1.800;
	cout << fahrenheit << " grader fahrenehit er " << celsius << " grader celsius";
}

//funksjon miles til km
void miles_to_km () {
	cout << "Skriv miles: ";
	cin >> miles;
	km = miles/1.609344;
	cout << miles << " miles er " << km << " kilometer";
}

//Funksjon for kilometer til miles
void km_to_miles() {
	cout << "Skriv km: ";
	cin >> km;
	miles=km*1.609344;
	cout << km << " kilometer er " << miles << " miles";
}

//funksjon for å avslutte programmet
void avslutt() {
	cout << "Velkommen tilbake";
}

int main() {

int alternativer;
	cout << "////////////////////////////////////////// \n";
	cout << "  Velkommen til the SuperDuper Converter \n";
	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
	cout << "1: Konvertere Celsius til Fahrenheit \n";
	cout << "2: Konvertere Fahrenheit til Celsius \n";
	cout << "3: Konvertere kilpmeter til miles \n";
	cout << "4: Konvertere miles til kilometer \n";
	cout << "5: Avslutt programmet \n";
	cin >> alternativer;
//	cout << " Du skrev: " << alternativer;
switch (alternativer) {
	case 1:
		celsius_to_fahrenheit();
		cout << "Trykk en tast for å gå til menyen. \n";
		cin.ignore();
		cin.get();
		main();
	case 2:
		fahrenheit_to_celsius();
		cout << "Trykk en tast for å gå til menyen. \n";
		cin.ignore();
		cin.get();
		main();
	case 3:
		miles_to_km();
		cout << "Trykk en tast for å gå til menyen. \n";
		cin.ignore();
		cin.get();
		main();
	case 4:
		km_to_miles();
		cout << "Trykk en tast for å gå til menyen. \n";
		cin.ignore();
		cin.get();
		main();
	case 5:
		avslutt();
		break;
	default:
        cout<<"\ninvalid choice....";
		cout << "Trykk en tast for å gå til menyen. \n";
		cin.ignore();
		cin.get();
		main();
}
	return 0;
}