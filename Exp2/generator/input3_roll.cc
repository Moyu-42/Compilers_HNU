/* (a|b)*abb(a|b)* */
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() {
    srand(time(0));
    freopen("../input_file/input3_", "w", stdout);
    char s[2] = {'a', 'b'};
    for (int i = 0; i <= 4; i++) {
        for (int times = 0; times < 3; times++) {
            for (int j = 0; j < i; j++) {
                int choice = rand() % 2;
                cout << s[choice];
            }
            cout << "abb";
            for (int j = 0; j < i; j++) {
                int choice = rand() % 2;
                cout << s[choice];
            }
        }
        cout << endl;
    }
    for (int num = 0; num < 9; num++) {
        int times = rand() % 15 + 1;
        for (int i = 0; i < times; i++) {
            int choice = rand() % 2;
            cout << s[choice];
        }
        cout << endl;
    }
}