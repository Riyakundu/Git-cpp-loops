#include <iostream>
using namespace std;
class overtime
{
private:
    int hour;
    float p;

public:
    void pay();
};
void overtime::pay()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the number of hours the no." << i << " employee worked: " << endl;
        cin >> hour;
        if (hour > 40)
            p = (hour - 40) * 12.0;
        else
            p = 0.0;
        cout << "Overtime pay= " << p << endl;
    }
}
int main()
{
    overtime ovtp;
    ovtp.pay();
    return 0;
}