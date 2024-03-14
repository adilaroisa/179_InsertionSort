#include <iostream>
using namespace std;

int arr[20];    // Memuat array dengan panjang data 20
int n;          // Membuat variabel inputan n

void input() {  // Procedure input
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : "; // Membuat inputan jumlah element Array
        cin >> n;                                    // Memanggil variabel inputan n

        if (n <= 20) {
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 Elemen.\n";  // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                           // Membuat jarak perbaris program
    cout << "======================" << endl;               // Membuat tampilan susunan data elemen array
    cout << "Masukan Elemen Array" << endl;
    cout << "======================" << endl;


    for (int i = 0; i < n; i++)                             // Menggunakan peruangan for untuk menyimpan data array
    {
        cout << "Data ke-" << (i + 1) << ": ";              // Memasukan atau menginput nilai data n
        cin >> arr[i];                                      // Menyimpan nilai data n ke dalam array arr
    }
}

int main()
{
   
}

