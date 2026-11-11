#include <iostream>
using namespace std;

int main() {
    const int baris = 3; 
    const int kolom = 4; 
    int matriks [baris][kolom]; 

    // input data 
    cout << "masukan elemen matriks: " << baris << "x" << kolom << ":\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "elemen [" << i << "][" << j <<"]: ";
            cin >> matriks [i] [j];
        }
    }

    // tampilkan matriks 
    cout << "\nisi matriks:\n";
    for (int i = 0; i < baris;  i++) {
        for (int j = 0; j < kolom; j++) {
         cout << matriks[i][j] << "\t";
      }
         cout << endl;
    }
    // hitung total semua elemen 
    int total = 0; 
    for (int i = 0; i< baris; i++)
        for (int j = 0; j < kolom; j++)
             total += matriks [i][j];
        } 
    
        cout << "\ntotal semua elemen: " << total << endl;
        
        return 0;
}   