#include <iostream>
using namespace std;

int main() {
    int deger1 = 10;
    int a, b;

    cout << "Welcome Everyone\n\tto\n\tC++" << endl;
    cout << "How are you today?" << endl;

    deger1++;
    deger1 += 5;
    cout << deger1 << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int x = 5;
    cout << "X: " << x << endl;
    x += a;
    cout << "X+: " << x << endl;
    x -= a;
    cout << "X-: " << x << endl;
    x *= a;
    cout << "X*: " << x << endl;
    x /= a;
    cout << "X/: " << x << endl;
    x %= a;
    cout << "X%: " << x << endl;

    int top = a + b;
    int carp = a * b;
    int cik = a - b;
    int böl = a / b;
    int mod = a % b;
    cout << "Toplam: " << top << endl;
    cout << "Çarpım: " << carp << endl;
    cout << "Çıkarma: " << cik << endl;
    cout << "Bölme: " << böl << endl;
    cout << "Mod: " << mod << endl;
    return 0;
}