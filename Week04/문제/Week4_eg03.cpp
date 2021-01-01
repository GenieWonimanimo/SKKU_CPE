#include <iostream>
#include <cstdio>
using namespace std;
int& lCopy(int &src) {return src;}
int rCopy(int src) {return src;}

int main(void)
{
    int src = 10;
    const int src2 = 20;
    int& lout = lCopy(src);
    // int& lout2 = lCopy(src2); 바꿀 수 없는 거지만 넌 바꿀 수 있어 식 코드
    int rout = rCopy(src);
    printf("return values: ref=%d, val=%d\n", lout, rout);
    src = 5;
    printf("return values: ref=%d, val=%d\n", lout, rout);

    return 0;
}