#include <iostream>
#include <cmath>
using namespace std;
class octal
{
private:
    int num;

public:
    void octal_equivalent();
};
void octal::octal_equivalent()
{
    int rem, i = 1, s = 0;
    cout << "Enter the number whose octal equivalent you want: " << endl;
    cin >> num;
    while (num != 0)
    {
        rem = num % 8;
        s = s + rem * i;
        num = num / 8;
        i = i * 10;
    }
    cout << "The octal equivalent is= " << s << endl;
}
int main()
{
    octal oc;
    oc.octal_equivalent();
    return 0;
}