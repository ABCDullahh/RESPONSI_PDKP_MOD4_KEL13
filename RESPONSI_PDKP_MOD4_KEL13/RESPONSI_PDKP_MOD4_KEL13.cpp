#include <iostream>

using namespace std;
class Responsi {
public:
	Responsi();
	void enkripsi();
	void dekripsi();
	void output();
	char ubahan[100];
	char temp;
	int key = 1;
};

Responsi::Responsi() {
	cout << "Masukkan kata : ";
	cin >> ubahan;
	cout << endl;
}

void Responsi::enkripsi() {
	for (int i = 0; i < strlen(ubahan); ++i) {
		temp = ubahan[i];
		if (temp >= 'a' && temp <= 'z') {
			temp += key;
			if (temp > 'z') {
				temp = temp - 'z' + 'a' - 1;
			}
			ubahan[i] = temp;
		}
	}
}

void Responsi::dekripsi() {
	for (int i = 0; i < strlen(ubahan); ++i) {
		temp = ubahan[i];
		if (temp >= 'a' && temp <= 'z') {
			temp -= key;
			if (temp < 'a') {
				temp = temp + 'z' - 'a' + 1;
			}
			ubahan[i] = temp;
		}
	}
}


void Responsi::output() {
	for (int i = 0; i < strlen(ubahan); i++) {
		cout << ubahan[i];
	}
}

int main()
{
	Responsi Deskripsi;
	Deskripsi.enkripsi();
	cout << "Enkripsi : ";
	Deskripsi.output();
	Deskripsi.dekripsi();
	cout << "" << endl;
	cout << "Dekripsi : ";
	Deskripsi.output();

	cout << endl << endl;
	
	return 0;
}