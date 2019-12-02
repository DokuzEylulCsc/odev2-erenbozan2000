#include <iostream>
#include <string>	

using namespace std;

int main() {

	string roman;
	int girdi;
	int parca;
	
	cout << "lutfen bir sayi giriniz!: ";
	cin >> girdi;
	
	if ((girdi >= 4000) || (girdi <= 0)) {
		cout << endl << "gecersiz sayi girdiniz" << endl;

	}
	else {
		if (girdi >= 1000) {
			parca = (girdi / 1000);

			for (int i = 0; i < parca; i++) {
				roman += 'M';
			}
			girdi %= 1000;
		}
		if (girdi >= 100) {
			parca = (girdi / 100);

			if (parca == 9) {
				roman += "CM";
			}
			else if (parca >= 5) {
				roman += "D";
				
				for (int i = 0; i < parca - 5; i++) {
					roman += "C";
				}
			}
			else if (parca == 4) {
				roman += "CD";
			}
			else if (parca >= 1) {
				for (int i = 0; i < parca; i++) {
					roman += "C";
				}
			}
			girdi %= 100;
		}

		if (girdi >= 10) {
			parca = (girdi / 10);
			if (parca == 9) {
				roman += "XC";
			}
			else if (parca >= 5) {
				roman += "L";

				for (int i = 0; i < parca - 5; i++) {
					roman += "X";
				}
			}
			else if (parca == 4) {
				roman += "XL";
			}
			else if (parca >= 1) {

				for (int i = 0; i < parca; i++) {
					roman += "X";
				}
			}
			girdi %= 10;
		}

		if (girdi >= 1) {
			parca = girdi;
			if (parca == 9) {
				roman += "IX";
			}
			else if (parca >= 5) {
				roman += "V";

				for (int i = 0; i < parca - 5; i++) {
					roman += "I";
				}
			}
			else if (parca == 4) {
				roman += "IV";
			}
			else if (parca >= 1) {

				for (int i = 0; i < parca; i++) {
					roman += "I";
				}
			}
		}



		cout << "roman gosterim; " << roman << endl;
	}

	return 0;
}