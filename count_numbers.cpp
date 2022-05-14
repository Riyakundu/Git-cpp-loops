#include <iostream>
using namespace std;
class count
{
private:
    int n;

public:
    void count_num();
};
void count::count_num()
{
    int num[20], c1, c2, c3;
    cout << "How many numbers you want to enter: " << endl;
    cin >> n;
    cout << "Enter the numbers: " << endl;
    c1 = c2 = c3 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        if (num[i] > 0)
            c1 = c1 + 1;
        else if (num[i] < 0)
            c2 = c2 + 1;
        else
            c3 = c3 + 1;
    }
    cout << "Number of positive numbers entered= " << c1 << endl;
    cout << "Number of negative numbers entered= " << c2 << endl;
    cout << "Number of zeros entered= " << c3 << endl;
}
int main()
{
    count c;
    c.count_num();
    return 0;
}