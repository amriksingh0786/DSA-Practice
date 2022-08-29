/*
Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.

Example 2:
Input: num1 = 3, num2 = 6
Output: 3
Explanation: Since 4 is the greatest number which divides both num1 and num2.
*/
#include <iostream>
using namespace std;
int main()
{
    int num1 = 3, num2 = 6;
    int ans;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
