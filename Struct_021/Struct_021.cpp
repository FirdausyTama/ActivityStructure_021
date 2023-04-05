#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukan umur = ";
	cin >> mhs.umur;

	cout << "\nMasukan NIM = " << mhs.NIM;
	cout << "\nMasukan Nama = " << mhs.Nama;
	cout << "\nMasukan Alamat = " << mhs.Alamat;
	cout << "\nMasukan Umur = " << mhs.umur;
}