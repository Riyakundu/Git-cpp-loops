#include <iostream>
using namespace std;
class matchstick
{
private:
    int m = 21;

public:
    void matchstick_game();
};
void matchstick::matchstick_game()
{
    int n, com;
    while (1)
    {
        cout << "Number of matchsticks left= " << m << endl;
        cout << "Pick 1 or 2 or 3 or 4 matches: " << endl;
        cin >> n;
        if (n < 1 || n > 4)
            continue;
        m = m - n;
        cout << "Number of matches left = " << m << endl;
        com = 5 - n;
        cout << "out of which computer picked up: " << com << endl;
        m = m - com;
        if (m == 1)
        {
            cout << "Number of matches left= " << m << endl;
            cout << "You lost the game." << endl;
            break;
        }
    }
}
int main()
{
    matchstick mt;
    mt.matchstick_game();
    return 0;
}