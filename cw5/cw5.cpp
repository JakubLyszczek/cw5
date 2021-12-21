#include <iostream>

using namespace std;

int main()
{
	//zadanie1 
	//pierwsza jest zadeklarowana łańcuchowo a druga zbiorczo 


	//zadanie2    
	//wczytanie elementu cin >> liczby jest niepoprawne

	//zadanie3
	/*
	char tab[] = "wiosna";
	cout << size(tab);
	*/
	//zadanie4


	//zadanie5

	char ulica[100];
	char numer_domu[10];
	char adres;
	int umiejetnosci;
	int staz;

	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	cin.get(ulica, 100).get();
	cout << "Podaj nr domu: ";
	cin.get(numer_domu, 10).get();
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
	cin >> umiejetnosci;
	cout << "Twoj staz programistyczny: ";
	cin >> staz;
	cout << endl << endl;

	cout << "Adres: " << ulica << " " << numer_domu << endl;
	cout << ulica;
	cout << "Ocena: " << umiejetnosci - 1 << endl;
	cout << "Staz: " << staz << endl;

	//zadanie6


}