#include <iostream>
using namespace std;
void main(void)
{
    int a = 2, b = 5;
    void obmen1(int, int);   // For swapping using values
    void obmen2(int*, int*);// For swapping using pointers
    void obmen3(int&, int&);// For swapping using references
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    obmen1(a, b);
    cout << "After Swap 1: a = " << a << ", b = " << b << endl;
    obmen2(&a, &b);
    cout << "After Swap 2: a = " << a << ", b = " << b << endl;
    obmen3(a, b);
    cout << "After Swap 3: a = " << a << ", b = " << b << endl;
}

void obmen1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void obmen2(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void obmen3(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
