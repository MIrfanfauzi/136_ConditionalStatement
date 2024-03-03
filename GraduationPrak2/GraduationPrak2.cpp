#include <iostream>
using namespace std;

int main()
{
    float nMat, nFisika, rerata;
    string status;

    cout << " Masukan nilai matematika";
    cin >> nMat;
    cout << " Masukan nilai Fisika";
    cin >> nFisika;

    rerata = (nFisika + nMat) / 2;

    if (rerata >= 60) {
        status = " Lulus jalur matematika";
    }
    else if (nMat >= 70) {
        status = " lulus jalur matematika";
    }
    else
    {
        status = "tidak lulus";
    }
    cout << " status kelulusan " << status << endl;
}
