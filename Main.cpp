#include <iostream>
using namespace std;
int main() {
int n = 20;
int total_numbers = n;
int sum = 0;
while (n > 0) {
sum += n;
n--;
}
double average = (double)sum / total_numbers;
cout << "Sum = " << sum << endl;
cout << "Average = " << average << endl;
return 0;
}
