#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    cout << "Masukan Jumlah Data Pada Array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}