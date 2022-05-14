#include <iostream>
using namespace std;
class armstrong
{
private:
    int num;

public:
    void check_num();
};
void armstrong::check_num()
{
    int temp, r, s = 0;
    cout << "Enter the number: " << endl;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        s = s + (r * r * r);
        temp = temp / 10;
    }
    if (num == s)
        cout << "The number " << num << " is Armstrong number." << endl;
    else
        cout << "The number " << num << " is not an Armstrong number." << endl;
}
int main()
{
    armstrong a;
    a.check_num();
    return 0;
}