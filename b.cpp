#include <bits/stdc++.h>


using namespace std;
int main()
{
    int p, e, aux, total, has4;
    char c;
    cin >> p;
    map<const int, int> planks;
    map<const int, int>::iterator it;
    for(int i=0; i<p; i++)
    {
        cin >> aux;
        planks[aux]++;
    }
    cin >> e;
    for( int i=0; i<e; i++)
    {
        total = 0;
        has4 = 0;
        cin >> c;
        cin >> aux;
        if( c == '+')
            planks[aux]++;
        else
            planks[aux]--;
        for( pair<const int, int> elem : planks)
        {
            if(elem.second >= 2)
            {
                if(elem.second >= 4)
                    has4 = 1;
                total += elem.second/2;
            }
        }
        if(total >= 4 && has4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
