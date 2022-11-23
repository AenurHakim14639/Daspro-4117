#include <iostream>

using namespace std;

int main()
{
    cout << "Problem no 2\n" << endl;
    int j = 1;
    for (int i = 1; i <=100; i++){
            if ( i % 2 == 1)  {
                continue;
            }
        cout << "Nilai Genap adalah " << i << endl;
    }
    return 0;
}
