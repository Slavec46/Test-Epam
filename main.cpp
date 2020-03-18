#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
void sortArray(int* ar, int sze) // сам алгоритм сортировки
{
    for(int i = 0; i < sze; i++)
        for(int j = 0; j < sze - i - 1; j++)
            if(ar[j] > ar[j + 1])
                swap(ar[j], ar[j + 1]);
}
 
int main(int argc, char** argv)
{
    srand(time(NULL));
    int n;
    cout << "Enter N: "; // число элементов в массиве
    cin >> n;
    int* ptr = new int [n];
    for(int i = 0; i < n; i++)
        cout << setw(4) << (ptr[i] = rand()%100);
    cout << endl;
    sortArray(ptr, n);
    cout << "Array after function sortArray:\n"; // вывод отсортированной последовательности 
    for(int i = 0; i < n; i++)
        cout << setw(4) << ptr[i];
    delete [] ptr;
    return 0;
}