#include <iostream>
using namespace std;
class range
{
private:
    int n, num[20];

public:
    void renge_num();
};
void range::renge_num()
{
    int max, min;
    cout << "How many numbwers you want to enter: " << endl;
    cin >> n;
    cout << "The numbers are: " << endl;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    max = min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (min > num[i])
            min = num[i];
        if (max < num[i])
            max = num[i];
    }
    cout << "The range of the set of numbers is= " << (max - min) << endl;
}
int main()
{
    range r;
    r.renge_num();
    return 0;
}