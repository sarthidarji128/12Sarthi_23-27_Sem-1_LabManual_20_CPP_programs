#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    // Input coefficients from the user
    cout << "Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):" <<endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Calculate the discriminant (D)
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:" <<endl;
        cout << "Root 1 = " << root1 <<endl;
        cout << "Root 2 = " << root2 <<endl;
    } else if (discriminant == 0) {
        // One real root (repeated)
        double root = -b / (2 * a);
        cout << "Roots are real and repeated:" << endl;
        cout << "Root 1 = Root 2 = " << root << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and conjugate:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
