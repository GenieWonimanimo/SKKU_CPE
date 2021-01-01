#include <iostream>
using namespace std;

// Can overloaded as "member operator"
// Only one parameter, not two!
class vec3
{
private:
    float x, y, z;
public:
    vec3(float a, float b, float c) : x(a), y(b), z(c)
    { }
    const vec3 operator*(int a)
    {
        //cout << "1" << endl;
        return vec3((this->x) * a, (this->y) * a, (this->z) * a);
    }
    // const vec3 operator * (int a, const vec& v); // error why -> if we use like this, we need 3 operand
    float GetX() const {return x;}
    float GetY() const {return y;}
    float GetZ() const {return z;}
    friend ostream& operator <<(ostream& os ,const vec3& c);
};

const vec3 operator*(const vec3& v, int a)
{
    //cout << "2" << endl;
    return vec3(v.GetX() * a, v.GetY() * a, v.GetZ() * a);
}

const vec3 operator*(int a, const vec3& v)
{
    cout << "3" << endl;
    return vec3(v.GetX() * a, v.GetY() * a, v.GetZ() * a);
}

ostream& operator <<(ostream& os ,const vec3& c)
{
    return os << c.GetX() << ", " << c.GetY() << ", " << c.GetZ();
    //return os << c.x << ", " << c.y << ", " << c.z;
}

int main(void)
{
    vec3 v(10.0f, 20.0f, 30.0f);
    cout << v * 3 << endl;
    cout << 3 * v << endl;
    return 0;
}