#include <iostream>
using namespace std;
class power
{
private:
    float x, p = 1;
    int y;

public:
    void power_num();
};
void power::power_num()
{
    cout << "Enter the base number: " << endl;
    cin >> x;
    cout << "Enter the exponent: " << endl;
    cin >> y;
    for (int i = 1; i <= y; i++)
        p = p * x;
    cout << x << " to the power " << y << " is= " << p << endl;
}
int main()
{
    power pw;
    pw.power_num();
    return 0;
}