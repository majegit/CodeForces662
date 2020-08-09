#include <bits/stdc++.h>


using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);

    int t, grid;
    cin >> t;
    while(t--)
    {
        cin >> grid;
        cout << grid/2+1 << "\n";
    }
    return 0;
}
