#include<iostream>
using namespace std;
bool bisearch(int const a[], const int size,int x)
{
    int l = 0, r = size - 1;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            if (a[mid]<x)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        for (int i = l; i <= r; i++)
            if (a[i] == x)
                return true;
        return false;
    
}
int main() {
    const int n = 20;
    int arr[n],j=0;
    for (int i(0); i < 20; i++) { 
        j += 2;
        arr[i] = j;
    }
    int number = 0;
    cout << "input number" << endl;
    cin >> number;
    cout << boolalpha << bisearch(arr, n, number) << endl; // функция бинарного поиска, выдает true or false
    system("pause");
    return 0;
}