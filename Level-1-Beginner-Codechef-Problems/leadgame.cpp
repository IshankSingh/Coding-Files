/*
** @author : Ishank Singh
** link : https://www.codechef.com/problems/TLG
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int sum1 = 0, sum2 = 0;
	int maxlead = 0;
	int lead, win;
	while (t--)
	{
	    int Player1, Player2;
	    cin >> Player1 >> Player2;
	    sum1 = sum1 + Player1;
	    sum2 = sum2 + Player2;
	    
	    if (sum1 > sum2)
	    {
	        lead = sum1 - sum2;
	        if (lead > maxlead)
	        {
	            win = 1;
                cout << "[maxlead]: " << maxlead << "\n";
	            maxlead = lead;
                cout << "[win]: " << win << "[maxlead]: " << maxlead << "\n";
            }
	    }
	    else
	    {
	        lead = sum2 - sum1;
	         if (lead > maxlead)
	        {
	            win = 2;
                cout << "[maxlead]: " << maxlead << "\n";
                maxlead = lead;
                cout << "[win]: " << win << "[maxlead]: " << maxlead << "\n";
            }
	    }
	}
	cout << win << " " << maxlead;
	return 0;
}
