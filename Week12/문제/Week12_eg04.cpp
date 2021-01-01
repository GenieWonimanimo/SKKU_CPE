#include <iostream>
using namespace std;

class vec3
{
public:
    float x, y, z;
    vec3(float a, float b, float c) : x(a), y(b), z(c)
    { }
};

const vec3 operator-(const vec3& v1, const vec3& v2)
{
    return vec3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

int main(void)
{
    vec3 pos(10.0f, 20.0f, 30.0f), pos2(1.0f, 2.0f, 3.0f);
    vec3 npos = pos - pos2;
    cout << npos.x << ", " << npos.y << ", " << npos.z << endl;
    return 0;
}