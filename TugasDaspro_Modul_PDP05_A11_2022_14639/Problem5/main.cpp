#include <iostream>

using namespace std;

int main()
{
    cout << "Problem 5\n" << endl;
    cout << "Program ini akan berhenti bila anda menginputkan angka -99\n" << endl;
    int f;
    for(int j = 0;; j++){
        cout << "Masukkan nilai anda: ";
        cin >> f;
        if(f == -99){
            break;
        }
    }
    cout <<"\nKeluar karena break" << endl;

    return 0;
}
