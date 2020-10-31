#include <iostream>

using namespace std;

int fourOperation() {
    int deger1 = 10;
    int a, b;

    cout << "Welcome Everyone\n\tto\n\tC++" << endl;
    cout << "How are you today?" << endl;

    deger1++;
    ++deger1;
    deger1 = deger1 + 5;

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

};

int ifElseCondition() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 5) {
        cout << "X 5'ten büyük!\n";
    }

    if (x >= 5) {
        cout << "X 5'ten büyük ya da 5'e eşit!\n";
    }

    if (x <= 5) {
        cout << "X 5'ten küçük ya da 5'e eşit!\n";
    }

    if (x == 5) {
        cout << "X 5'e eşit!\n";
    }

    if (x != 5) {
        cout << "X 5'e eşit değil!\n";
    }
    else {
        cout << "X bir tam sayı değil!";
    }

    return 0;
};

int whileCondition() {
    int x = 5;

    while (x > 0) {
        x--;
        cout << x << endl;
    }
};

int forCondition() {
    for (int x = 0; x < 10; x++) {
        cout << x << endl;
    }
    for (int y = 0; y < 10; y += 5) {
        cout << y << endl;
    }
};

int doWhileCondition() {
    int x = 0;
    do {
        cout << x << "\t";
        x++;
    } while (x < 10);
    int y = 35;
    do {
        cout << y;
        y++;
    } while (x < 5);
};

int infinity() {
    int x = 5;
    do {
        cout << x << "\t\n";
        x++;
    } while (x > 0);
};

int switchCondition() {
  int yas = 88;
  switch (yas) {
      case 18:
          cout << "Genç";
          break;
      case 41:
          cout << "Yetişkin";
          break;
      case 65:
          cout << "Kıdemli";
          break;
      default:
          cout << "Sınıflandırma Dışı";
    }
};

int logicOperators() {
    int age = 20;
    int score = 80;
    if (age > 18 && age < 50 && score > 50) {
        cout << "Accepted" << endl;
    };

    int x = 16;
    int y = 90;
    if (x > 20 || y >50) {
        cout << "Done" << endl;
    };

    int reverse = 15;
    if ( !(reverse > 20) ) {
        cout << "It's Reverse" << endl;
    };
}

int main() {
    //fourOperation();
    //ifElseCondition();
    //whileCondition();
    //forCondition();
    //doWhileCondition();
    //infinity();
    //switchCondition();
    //switchTest();
    logicOperators();
    return 0;
}