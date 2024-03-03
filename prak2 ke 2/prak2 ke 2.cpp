#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int nBillA, nBillB;
    string status;

        nBillA = rand() % 11;
        nBillB = rand() % 11;
    
        if (nBillA == nBillB) {
            status = "Bilangannya sama";
        }
        else if (nBillA > nBillB) {
            status = "Bilangan A lebih besar dari bilangan B";
        }
        else
        {
            status = " Bilangan A lebih kecil dari bilangan B";
        }

        cout << "Bilangan A = " << nBillA << endl;
        cout << "Bilangan B = " << nBillB << endl;
        cout << "Status Bilangan = " << status << endl;
}





