
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main() {


    printf("12345678901234567890\n");
    printf("%10s", "Name");
    printf("%9s", "Marks");
    printf("\n");

    printf("%10s", "Shan");
    printf("%9.2f\n",67.4523);

    printf("%10s", "Bimali");
    printf("%9.2f\n",48.234);

    printf("%10s", "Tharindi");
    printf("%9.2f\n",95.347);

    cout << endl << endl;

    cout << "12345678901234567890" << endl;
    cout << setw(10) <<  "Name";
    cout << setw(9) <<  "Marks" << endl;

    cout << setw(10) << "Shan";
    cout << setiosflags(ios::fixed) << setw(9) << setprecision(2)<< 67.4523 << endl;

    cout << setw(10) << "Geetha";
    cout << setw(9) << setprecision(2)<< 45.2323 << endl;

    cout << setw(10) << "Pradeep";
    cout <<  setw(9) << setprecision(2)<< 76.8933 << endl;

    return 0;
}