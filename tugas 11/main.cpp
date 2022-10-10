#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas Pertemuan 11 Daspro" << endl;
    cout << "\n4117 \nA11.2022.14639 \nAenur Hakim Maulia";

    cout << "\nDeret Bilangan Fibonacci Terbesar Kurang-dari 100 \n " <<endl;

    int x = 1;
    int y = 1;
    int z = 0;

    cout << "Deret Bilangan Fibonacci: " << x << " , " << y <<", ";

    z = x+y;

    while(z < 100){
        cout << z << ", " ;
        x = y;
        y = z;
        z = x + y;
    }

    cout << " \n " ;

    return 0;
}
