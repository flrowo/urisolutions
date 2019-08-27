#include <iostream>

// in this one, i included manip to use setprecision function so i get precision of 3 decimal places as asked
#include <iomanip>

using namespace std;

int main() {
	float a;
	cin >> a;
    // 3.14159 = pi
    // 4.0 so the division result is a double and not an int
    // fixed so 5 becomes 5.000
    // a*a*a instead of creating a power function like pow(a, 3) that would be a^3
	cout << fixed << setprecision(3) << "VOLUME = " << (4.0 / 3) * 3.14159 * a * a * a << endl;
	return 0;
}
