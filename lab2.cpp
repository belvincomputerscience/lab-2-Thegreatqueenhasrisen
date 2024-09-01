#include <iostream>

using namespace std;

int main()
{
int num1 = 86;
int num2 = 75;
int num3 = 62;
int num4 = 98;

long long int result = static_cast<long long int>(num1) * num2 * num3 * num4;
cout << "Result" << result << endl;

return 0;
}
