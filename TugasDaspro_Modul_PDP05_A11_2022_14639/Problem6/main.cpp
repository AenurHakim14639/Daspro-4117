#include <iostream>

using namespace std;

int main()
{
    cout << "Problem6\n" << endl;
    int j, maxx, minn;
    for(int i = 0;; i++){
        cin >> j;
        if (j > maxx){
            maxx = j;
        }
        if(j < minn && j != -99){
            minn = j;
        }
        if(j == -99){
            cout << "Max = " << maxx << endl;
            cout << "Min = " << minn << endl;
            break;
        }
    }
    return 0;
}
