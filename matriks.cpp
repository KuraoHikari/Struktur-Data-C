#include <iostream>
using namespace std;

int main() {
  int baris;
  int kolom;
  bool simetri = true;

  cout << "Masukkan jumlah baris matriks : ";
  cin >> baris;
  cout << "Masukkan jumlah kolom matriks : ";
  cin >> kolom;

  if (baris < 1 || kolom < 1) {
    cout << "Tidak bisa minimal memasukan nilai baris atau kolom > 0";
  }

  int arrMatrix[baris][kolom];
  int transpose[kolom][baris];

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << "Masukkan elemen baris ke-" << i + 1 << ", kolom ke-" << j + 1
           << ":";
      cin >> arrMatrix[i][j];
    }
  }
  cout << "Matriks:\n";

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << arrMatrix[i][j];
      cout << " ";
    }
    cout << endl;
  }
  cout << endl;
  // transpose
  for (int i = 0; i < baris; ++i) {
    for (int j = 0; j < kolom; ++j) {
      transpose[j][i] = arrMatrix[i][j];
    }
  }
 cout << "Matriks Transpose:\n";
  for (int i = 0; i < kolom; ++i) {
    for (int j = 0; j < baris; ++j) {
      cout << " " << transpose[i][j];
      if (j == baris - 1)
        cout << endl << endl;
    }
  }
//simetri
  if (baris == kolom) {
  for (int i = 0; i < baris; ++i) {
     bool tmp = true;
    for (int j = 0; j < kolom; ++j) {
      if(transpose[j][i] != arrMatrix[i][j]){
        simetri = false;
        tmp = false;
        break;
      }
    }
    if(tmp == false){
      break;
    }
  }
  } else {
    simetri = false;
  }
  
  if (simetri == true) {
    cout << "Matrix simetris";
  } else {
    cout << "Matrix tidak simetris";
  }
  return 0;
}