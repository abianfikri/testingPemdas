#include <iostream>
#include <string>
using namespace std;

string arr[20];										// Array untuk nama
string pesan[20];									// Array untuk status
double matematika[20], inggris[20], rata_rata[20]; // Array nilai matematika, bahasa inggris, dan rata rata
double total_nilai;								   // variable untuk menghitung nilai matematika dan bahasa inggris
int n;											  // varible n untuk memasukkan jumlah data
int lulus, gagal;

void input() {
	while (true)
	{
		cout << "Masukkan Jumlah Data Mahasiswa : "; // Membuat Inputan jumlahh element Array
		cin >> n;									  // memanggil variable inputan n

		if (n <= 20) {								  // Membuat Kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Membuat jarak per baris program
	cout << "======================" << endl;		// Membuat tampilan susunan data element array
	cout << "Masukkan Data Mahasiswa" << endl;
	cout << "======================" << endl;


	for (int i = 0; i < n; i++)						// Menggunakan perulangan for untuk menyimpan data pada array
	{	
		cout << "Mahasiswa ke-" << (i + 1) << ": \n" ;		 

		cout << "Masukkan Nama: ";							// Menginputkan nilai array nama
		cin >> arr[i];

		cout << "Masukkan Nilai Matematika: ";				// Menginputkan nilai data matematika
		cin >> matematika[i];

		cout << "Masukkan Nilai Inggris: ";					// Mengunputkan nilai data Bahasa Inggris
		cin >> inggris[i];

		cout << endl;
	}

}


int rerata() { // procedure mengembalikan nilai rerata

	int tot_rerata;				// varible untuk menyimpan nilai data array rata_rata[]

	for (int i = 0; i < n; i++)						// Looping nilai i mulai dari 0 sampai n-1
	{
		total_nilai = matematika[i] + inggris[i];   // Menjumlahkan 2 data matematika dan data bahasa inggris
		rata_rata[i] = total_nilai / 2;				// Rumus untuk mencari rerata 

		tot_rerata = rata_rata[i];					// Menyimpan nilai data rata-rata[] ke dalam variable tot_rerata
	}
	return tot_rerata;								// mengembalikan nilai tot_rerata
}

void status() { // procedure status
	
	for (int i = 0; i < n; i++)  // Looping dengan i mulai dari 0 sampai n-1
	{	
		
		if (rata_rata[i] >= 70 || rata_rata[i] >= 80 ) {		// Jika rerata > 80 maka diterima
			pesan[i] = "Diterima";
			lulus++;
		}
		else{							// Jika rerata < 80 maka tidak 
			pesan[i] = "Tidak Diterima";
			gagal++;
		}
	}	
}

void display() { // Display table
	cout << endl;											// Output baris Ko

	cout << "--------------------------------------------------" << endl;
	cout << "Data Nilai\n";
	cout << "--------------------------------------------------" << endl;
	cout << "No\tNama\tMtk\tIng\tNilai\tStatus" << endl;
	cout << "--------------------------------------------------" << endl;
	for (int j = 0; j < n; j++) {					// Looping dengan j dimulai dari 0  hingga n-1

		cout << (j + 1) << "\t" << arr[j] + "\t" << matematika[j] << "\t"
			<< inggris[j] << "\t" << rata_rata[j] << "\t" << pesan[j] << endl;
		cout << "--------------------------------------------------" << endl;
	}

	cout << endl;
	cout << "Jumlah Diterima: " << lulus << endl;
	cout << "Jumlah Tidak Diterima: " << gagal << "\n";

}


void display2() {
	cout << endl;											// Output baris Kosong
	cout << "\n==================================" << endl;   // Output ke layar
	cout << "Data Nilai Mahasiswa" << endl;    // Output ke layar  
	cout << "==================================" << endl;   // Output ke layar

	for (int j = 0; j < n; j++) {					// Looping dengan j dimulai dari 0  hingga n-1

		cout << "Data ke-" << (j + 1) << ": \n";		// Memasukkan atau menginputkan nilai data 
		cout << "Nama: " << arr[j] << endl;						// Output ke layar
		cout << "Nilai Matematika: " << matematika[j] << endl;
		cout << "Nilai Inggris: " << inggris[j] << endl;
		cout << "Rerata: " << rata_rata[j] << endl; // Output nilai rerata
		cout << "Status: " << pesan[j] << endl; // Outputs Status

		cout << endl;
	}
	cout << endl;
	cout << "Jumlah Diterima: " << lulus << endl;
	cout << "Jumlah Tidak Diterima: " << gagal << "\n";

}


int main() {
	input();
	rerata();
	status();
	display();
}