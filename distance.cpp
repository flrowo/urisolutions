// the Y car is +30km/h compared to car B or 0.5km/min
// then 2min/km (for each km further we get 2 minutes counted)
// so: input*2 = distance

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << a*2 << " minutos" << endl;
	return 0;
}
