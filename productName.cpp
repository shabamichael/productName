#include <iostream>
#include <string>
using namespace std;
int main() {
string prod_name[3];
double price[3];
// Populate product stock
for (int i = 0; i < 3; i++) {
cout << "Enter product name: ";
cin >> prod_name[i];
cout << "Enter price: ";
cin >> price[i];
}
// Find all products that cost more than R200
for (int i = 0; i < 3; i++) {
if (price[i] > 200.0)
cout << prod_name[i] << " is expensive!\n";
}
return 0;
}