#include<bits/stdc++.h>
using namespace std;

int main ()
{
int Weight;
cout<<"Enter the weight(in gram) of cloths: ";
cin >> Weight;

if (Weight == 0)
cout << "Time Estimated : 0 Minutes";

else if (Weight > 0 && Weight <= 2000)
cout << "Time Estimated : 25 Minutes";

else if (Weight > 2000 && Weight <= 4000)
cout << "Time Estimated : 35 Minutes";

else if (Weight > 4000 && Weight <= 7000)
cout << "Time Estimated : 45 Minutes";

else
cout << "INVALID INPUT";

return 0;

}