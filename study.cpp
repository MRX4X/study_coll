#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> mas(a);
    for (int i = 0; i < a; i++) {  // ввод массива
        cin >> mas[i];
    }
    int m = mas[0];

    for (int i = 0; i < a; i++) {
        if ((mas[i] > 0) {
            m = mas[i];
        }
    }
    cout << m; // вывод минимального значени
}