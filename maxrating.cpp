#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int h, s, price;
    cin >> h >> s >> price;
    vector<int> br(h + s), bp(h + s);
    for (int i = 0; i < h + s; i++)
    {
        cin >> br[i] >> bp[i];
    }

    for (int i = 0; i < h + s; i++)
    {
        for (int j = i + 1; j < h + s; j++)
        {
            if (bp[i] >= bp[j])
            {
                int temp = bp[i];
                bp[i] = bp[j];
                bp[j] = temp;
                int tempr = br[i];
                br[i] = br[j];
                br[j] = tempr;
            }
        }
    }
    for (int i = 0; i < h + s; i++)
    {
        cout << br[i] << ", " << bp[i] << endl;
    }

    int max = 0;
    int min = 99999;
    int minp = 0;
    int val = 0;

    for (int i = 0; i < h; i++)
    {
        if (bp[i] <= price)
        {
            max += br[i];
            if (br[i] <= min)
            {
                min = br[i];
                minp = bp[i];
            }
            price = price - bp[i];
            val = i;
        }
    }
    cout << "[val]:" << val << "[bp[val]]:" << bp[val] << endl;
    cout << "[minp]:" << minp << "[price]:" << price << "[min rating]:" << min << endl;
    if (bp[val] <= (price + minp) && min < br[val])
    {
        max = max - min;
        max += br[val];
        price = price + minp;
        price = price - bp[val];
    }

    cout << max;
}