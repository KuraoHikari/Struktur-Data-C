#include <iostream>
using namespace std;

int main() {
  cout << "Program penjumlahan dua matriks\n";
  int baris;
  int kolom;
  // bool simetri = true;

  cout << "Masukkan jumlah baris matriks : ";
  cin >> baris;
  cout << "Masukkan jumlah kolom matriks : ";
  cin >> kolom;

  if (baris < 1 || kolom < 1) {
    cout << "Tidak bisa minimal memasukan nilai baris atau kolom > 0";
  }

  int arrMatrix1[baris][kolom];
  int arrMatrix2[baris][kolom];
  int hasilMatrix[baris][kolom];
  // int transpose[kolom][baris];
  for (int x = 0; x < 2; x++) {
    for (int i = 0; i < baris; i++) {
      for (int j = 0; j < kolom; j++) {
        cout << "Masukkan elemen baris ke-" << i + 1 << ", kolom ke-" << j + 1
             << " matriks ke-" << x + 1 << " : ";
        if (x == 0) {
          cin >> arrMatrix1[i][j];
        } else {
          cin >> arrMatrix2[i][j];
        }
      }
    }
  }

  for (int x = 0; x < 2; x++) {
    cout << "Matriks ke-" << x + 1 << " :\n";
    for (int i = 0; i < baris; i++) {
      for (int j = 0; j < kolom; j++) {
        if (x == 0) {
          cout << arrMatrix1[i][j];
          cout << " ";
        } else {
          cout << arrMatrix2[i][j];
          cout << " ";
        }
      }
      cout << endl;
    }
  }

  cout << "Hasil Penjumlahan Matriks : \n";

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      hasilMatrix[i][j] = arrMatrix1[i][j] + arrMatrix2[i][j];
    }
  }

  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      cout << hasilMatrix[i][j];
      cout << " ";
    }
    cout << endl;
  }

  // cout << endl;
  // // transpose
  // for (int i = 0; i < baris; ++i) {
  //   for (int j = 0; j < kolom; ++j) {
  //     transpose[j][i] = arrMatrix[i][j];
  //   }
  // }
  // cout << "Matriks Transpose:\n";
  // for (int i = 0; i < kolom; ++i) {
  //   for (int j = 0; j < baris; ++j) {
  //     cout << " " << transpose[i][j];
  //     if (j == baris - 1)
  //       cout << endl << endl;
  //   }
  // }
  // // simetri
  //  if (baris == kolom) {
  //  for (int i = 0; i < baris; ++i) {
  //     bool tmp = true;
  //    for (int j = 0; j < kolom; ++j) {
  //      if(transpose[i][j] != arrMatrix[i][j]){
  //        simetri = false;
  //        tmp = false;
  //        break;
  //      }
  //    }
  //    if(tmp == false){
  //      break;
  //    }
  //  }
  //  } else {
  //    simetri = false;
  //  }

  // if (simetri == true) {
  //   cout << "Matrix simetris";
  // } else {
  //   cout << "Matrix tidak simetris";
  // }

  // penjumlahan dua matrix tugas

  return 0;
}