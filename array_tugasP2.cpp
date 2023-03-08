#include <iostream>
using namespace std;

int main() {
  int countData;

  cout << "Masukkan jumlah angka"
       << " : ";
  cin >> countData;

  int arrData[countData];

  for (int i = 0; i < countData; i++) {
    cout << "Masukkan angka ke-" << i + 1 << ": ";
    cin >> arrData[i];
  }

  // cout << "Daftar angka: \n";

  int maxNumber = 0;

  for (int i : arrData) {
    if (i > maxNumber) {
      maxNumber = i;
    }
  }

  int maxNumber2 = 0;

  for (int i : arrData) {
    if (i > maxNumber2 && i < maxNumber) {
      maxNumber2 = i;
    }
  }

  cout << "Angka terbesar kedua: " << maxNumber2;
}