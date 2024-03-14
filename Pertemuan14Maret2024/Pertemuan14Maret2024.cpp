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

void insertionsort() { // Procedure insertionsort

    int temp;          // Membuat variabel data temporer atau penyimpanan sementara
    int i, j;         // Membuat variabel j sebagai penanda

    for (i = 1; i <= n - 1; i++) { // 1. Looping dengan i dimulai dari 1 hingga n-1

        temp = arr[i];              // 2. simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                 // 3. setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp) // 4. Looping whilw dimana nilai j lebih besar sama dengan o dan
            // arr[j] lebih besar dari temp
        {
            arr[j + 1] = arr[j];       // 4a. simpan arr[j] ke dalam variabel arr[j+1]
            j--;                       // 4b. Decreament nilai j by 1
        }

        arr[j + 1] = temp;             // Simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass " << i << ": "; // Output ke layar
        for (int k = 0; k < n; k++) // Looping nilai j dimulai dari 0 hingga n-1        
        {
            cout << arr[k] << " "; // Output ke layar
        }
    }

}

void display() {         // Procedure untuk menampilkan hasil
    cout << endl;        // Output baris kosong
    cout << "\n======================" << endl; // output ke layar
    cout << "Elemen Array yang telah tersusun" << endl; // output ke layar
    cout << "======================" << endl;           // output ke layar

    for (int j = 0; j < n; j++) {    // Looping dengan j dimulai dari o hingga n-1
        cout << arr[j] << endl;      // output ke layar
    }
    cout << endl;                    // output baris kosong
}

int main()
{
    input();             // memanggil input 
    insertionsort();     // memanggil insertion sort
    display();           // memanggil display
}

