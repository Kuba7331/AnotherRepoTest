#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void incrementValue() {
	int x, wybor;
	cout << "Witaj w naszej aplikacji!" << endl;
	while (wybor=true){
	cout << "Prosze wybrac jedna z podanych opcji" << endl;
	cout << "1 - Wypis liczby przed inkrementacja, oraz po." << endl;
	cout << "2 - Wyjscie z aplikacji" << endl;
	cin >> wybor;

	switch (wybor) {
	case 1:
		cout << "Prosze podac wartosc" << endl;
		cin >> x;
		if (!cin.fail()) {
			cout << "Wartosc przed inkrementacja: " << x << endl;
			cout << "Wartosc po inkrementacji: " << ++x << endl;
		}
		else {
			cout << "Podano bledne dane!" << endl;
		}
		break;
	case 2:
		cout << "Wyjscie z aplikacji..." << endl;
		exit(0);
		break;
	default:
		cout << "Podano bledne dane! Prosze podac ponownie!" << endl;
		break;
	}
	getchar(); getchar();
	system("cls");
	}
}

int main()
{
	incrementValue();
	return 0;
}