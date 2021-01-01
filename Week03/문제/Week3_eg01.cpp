#include <iostream>

int main(void)
{
    double var = 10.9829;
    int IntVar = static_cast<int>(var); // C 의 명시적 형변환과 가장 유사
    std::cout << IntVar << std::endl;

    double var1 = 123.123;
    const double& var2 = var1;
    double& var3 = const_cast<double&>(var2); // const 를 없애준다
    var3 = 2.4;
    std::cout << var1 << ", " << var2 << ", " << var3 << std::endl;

    int Intvar = 123;
    float fvar = reinterpret_cast<float&>(Intvar);
    return 0;
}