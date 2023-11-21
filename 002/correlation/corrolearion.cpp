#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    double *arr_x = new double[size];
    double *arr_y = new double[size];
    double *a = new double[size];
    double *b = new double[size];
    double av1 = 0, av2 = 0, m = 0, pow_a = 0, pow_b = 0;

    // Read values and compute averages
    for (int i = 0; i < size; ++i) {
        cout << "Enter the value of X: ";
        cin >> arr_x[i];
        av1 += arr_x[i];

        cout << "Enter the value of Y: ";
        cin >> arr_y[i];
        av2 += arr_y[i];
    }

    av1 /= size;
    av2 /= size;

    // Compute differences from the average
    for (int i = 0; i < size; ++i) {
        a[i] = arr_x[i] - av1;
        b[i] = arr_y[i] - av2;
        pow_a += std::pow(a[i], 2);
        pow_b += std::pow(b[i], 2);
        m += a[i] * b[i];
    }

    m /= sqrt(pow_a * pow_b);
    cout << "The correlation is: " << m << endl;

    // Free dynamically allocated memory
    delete[] arr_x;
    delete[] arr_y;
    delete[] a;
    delete[] b;

    return 0;
}
