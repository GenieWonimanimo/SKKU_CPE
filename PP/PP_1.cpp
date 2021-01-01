#include <iostream>
using namespace std;


int solution(int *hills, int len);
int GetDist(const int hills[], const int len, const int startPos);
int main() {
    int n; cin >> n; 
    int hills[n];
    for (int i=0; i<n; i++) {
        cin >> hills[i];
    }
    cout << solution(hills, n) << endl;
}
/* You can implement newly added functions here */


/* solution function. You must implement it */
int solution(int *hills, int len)
{
    int longestDist = 0;
    for (int i = 0; i < len; i++)
    {
        int dist = GetDist(hills, len, i);
        longestDist = (dist > longestDist) ? dist : longestDist;
    }
    return longestDist;	
}

int GetDist(const int hills[], const int len, const int startPos)
{
    int left_pos, right_pos;
    int left_height, right_height;
    left_pos = right_pos = startPos;
    left_height = right_height = hills[startPos];
    if (startPos == 0)
    {
        for (int i = 1; i < len; i++)
        {
            if (hills[i] > right_height)
                break;
            right_pos = i;
            right_height = hills[i];
        }
        return right_pos - left_pos;
    }
    else if (startPos == len - 1)
    {
        for (int i = len - 1; i >= 0; i--)
        {
            if (hills[i] > left_height)
                break;
            left_pos = i;
            left_height = hills[i];
        }
        return right_pos - left_pos;
    }
    else // 0 < startPos < len - 1
    {
        for (int i = startPos; i >= 0; i--)
        {
            if (hills[i] > left_height)
                break;
            left_pos = i;
            left_height = hills[i];
        }
        for (int i = startPos; i < len; i++)
        {
            if (hills[i] > right_height)
                break;
            right_pos = i;
            right_height = hills[i];
        }
        return right_pos - left_pos;
    }
}