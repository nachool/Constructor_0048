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

	static void Nim(int pnim) {nim = pnim}
	static int getNim() { return nim; }
}

int main()
{
   
}

