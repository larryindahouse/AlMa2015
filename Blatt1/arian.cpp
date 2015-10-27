#include <iostream>  //Bibliothek fuer Ausgabe (cout, endl)
using namespace std;

int main()         // Beginn Hauptprogramm
{                  // Beginn Befehlskette

    cout << "Aufgabenteil a)" << endl;
    double x, y;
    cout << "Bitte geben Sie x ein: ";
    cin >> x;
    cout << "Bitte geben Sie y ein: ";
    cin >> y;

    cout << "1 (maximum): ";
    if (x>y) {
        cout << x << endl;    
    }
    if (x<y) {
        cout << y << endl;
    }
    
    cout << "2 (summe): ";
    if (x*y >100) {
        cout << x+y << endl;
    } 

    cout << "3 (minimum): ";
    if ( x-y < 2 || y-x < 2) {
        if (x<y) {
            cout << x << endl;
        }
        else if (y<x) {
            cout << y << endl;
        }
        else {
            cout << "x und y sind gleich groß" << endl;
        }
    }

    cout << "Aufgabenteil b)" << endl;
    int m,n; 
    cout << "Bitte geben Sie m ein: ";
    cin >> m;
    cout << "Bitte geben Sie n ein: ";
    cin >> n;
    
    cout << "1 (teilt): ";
    if (m%n == 0) {
        cout << "n teilt m" << endl;
    }
    else if (n%m == 0) {
        cout << "m teilt n" << endl;
    }
    else 
        cout << "niemand teilt hier irgendwen" << endl;

    cout << "2 (teiler): ";
    if (m >= n) {
        int q = m/n;
        int r = m%n;
        cout << m << " = " << q << "*" << n << "+" << r <<  endl;
        cout << "q: " << q << ",r: " << r << endl;
    }
    else if (n > m) {
        int q = n/m;
        int r = n%m;
        cout << n << " = " << q << "*" << m << "+" << r <<  endl;
        cout << "q: " << q << ",r: " << r << endl;
    }

}                  // Ende Befehlskette
