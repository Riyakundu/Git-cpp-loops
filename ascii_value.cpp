#include <iostream>
using namespace std;
class ascii
{
private:
    char ch;

public:
    void ascii_value();
};
void ascii::ascii_value()
{
    cout << "ASCII values are: " << endl;
    int i = 0;
    while (i <= 255)
    {
        cout << char(i) << "\t" << i << endl;
        i++;
    }
}
int main()
{
    ascii asc;
    asc.ascii_value();
    return 0;
}