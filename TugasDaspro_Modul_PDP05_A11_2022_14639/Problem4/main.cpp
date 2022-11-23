#include <iostream>

using namespace std;

int main()
{
    cout << "Problem no 4\n" << endl;
        float total = 0, rata;
            int i;

        for (int i = 1; i <=20; i++){
            cout << i << endl;
            total = total + i;
            }
        cout << endl;
        cout << "total: " <<total << endl;
        rata = total / 20;
        cout << "Rata-rata: " << rata;
    return 0;
}
