// bai6_chuyen so thanh chu.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "CHUONG TRINH GIAI PHUONG TRINH BAC 2\n";
    double a, b, c, delta, x1, x2;
    
    cout << "Nhap a:"; cin >> a;
    cout << "Nhap b:"; cin >> b;
    cout << "Nhap c:"; cin >> c;
    if (a == 0) {
        // giai pt bac 1: bx + c =0
        if (b != 0)
        {
            cout << "phuong trinh co nghiem duy nhat x= " << -c / b << endl;
        }
        else {
            if (c != 0)
            {
                cout << "phuong trinh vo nghiem\n";
            }
            else {
                cout << "phuong trinh vo so nghiem\n";
            }
        }

    }
    else {
        //delta lon hon a
        x = (float)-b / a;
        cout << "ket qua x =" << x << endl;
    }
    return 0;
}