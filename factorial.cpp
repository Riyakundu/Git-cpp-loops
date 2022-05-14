#include <iostream>
using namespace std;
class factorial
{
private:
    int num;

public:
    void fact();
};
void factorial::fact()
{
    int f = 1;
    cout << "Enter the number: " << endl;
    cin >> num;
    for (int i = num; i >= 1; i--)
        f = f * i;
    cout << "Factorial value of " << num << " is= " << f << endl;
}
int main()
{
    factorial fn;
    fn.fact();
    return 0;
}