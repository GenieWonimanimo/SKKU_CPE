#include <iostream>
using namespace std;

class vec3
{
public:
    float x, y, z;
    vec3(float a, float b, float c) : x(a), y(b), z(c)
    { }
};

const bool operator==(const vec3& v1, const vec3& v2)
{
    return (v1.x == v2.x && v1.y == v2.y && v1.z == v2.z);
}

int main(void)
{
    vec3 pos(10.0f, 20.0f, 30.0f), pos2(10.0f, 20.0f, 30.0f);
    if (pos == pos2) cout << "pos==pos2" << endl;
    else cout << "pos!=pos2" << endl;
    return 0;
}