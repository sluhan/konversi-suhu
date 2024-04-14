#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float suhu;
    float cF, fC, cK, kC, fK, kF;

    cout << "Masukkan suhu: ";
    cin >> suhu;

    cout << "Pilih konversi suhu:" << endl;
    cout << "1. Celsius ke Fahrenheit" << endl;
    cout << "2. Fahrenheit ke Celsius" << endl;
    cout << "3. Celsius ke Kelvin" << endl;
    cout << "4. Kelvin ke Celsius" << endl;
    cout << "5. Fahrenheit ke Kelvin" << endl;
    cout << "6. Kelvin ke Fahrenheit" << endl;
    cout << "Masukkan pilihan Anda (1-6): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cF = (suhu * 9/5) + 32;
            cout << "Celcius ke Fahrenheit: " << cF << "°F" << endl;
            break;
        case 2:
            fC = (suhu - 32) * 5/9;
            cout << "Fahrenheit ke Celcius: " << fC << "°C" << endl;
            break;
        case 3:
            cK = suhu + 273.15;
            cout << "Celcius ke Kelvin: " << cK << "°K" << endl;
            break;
        case 4:
            kC = suhu - 273.15;
            cout << "Kelvin ke Celcius: " << kC << "°C" << endl;
            break;
        case 5:
            fK = (suhu - 32) * 5/9 + 273.15;
            cout << "Fahrenheit ke Kelvin: " << fK << "°K" << endl;
            break;
        case 6:
            kF = (suhu + 273.15) * 9/5 + 32;
            cout << "Kelvin ke Fahrenheit: " << kF << "°F" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}
