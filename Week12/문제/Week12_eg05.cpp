#include <iostream>
using namespace std;

class vec3
{
public:
    float x, y, z;
    vec3(float a, float b, float c) : x(a), y(b), z(c)
    { }
};

const vec3 operator-(const vec3& v1)
{
    return vec3(-v1.x, -v1.y, -v1.z);
}
int main(void)
{
    vec3 pos(1.0f, 2.0f, 3.0f);
    vec3 npos = -pos;
    cout << npos.x << ", " << npos.y << ", " << npos.z << endl;
    return 0;
}