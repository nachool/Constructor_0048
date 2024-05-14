#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;

public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void Nim(int pnim) { nim = pnim }
	static int getNim() { return nim; }

	mahasiswa(string pnama) {
		nama = pnama;
		setID();
	}
};

int mahasiswa::nim = 0;

void mahasiswa::setID()
{
	id = ++nim;
}


int main()
{
   
}

