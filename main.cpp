#include <iostream>

using namespace std;

int main(){
    system("cls");

    double nilai1, nilai2, hasil;
    char operasi;
    cout << " ====== Kalkulator Sederhana =====" << endl << endl;
    cout << "Masukkan Nilai Pertama : ";
    cin >> nilai1;
    cout << "Masukkan Operator Matematika (+, -, /, *) : ";
    cin >> operasi;
    cout << "Masukkan Nilai Kedua : ";
    cin >> nilai2;
    cout << endl;
    switch(operasi){
        case '+' : hasil = nilai1 + nilai2;break;
        case '-' : hasil = nilai1 - nilai2;break;
        case '*' : hasil = nilai1 * nilai2;break;
        case '/' : hasil = nilai1 / nilai2;break;
        default: hasil = 0;break;
    }

    cout << "Hasil dari " << endl << nilai1 << " " << operasi << " " << nilai2 << " = " << hasil;
    cout << endl << endl;

    cin.get();
    return 0;
}