#include <iostream>
using namespace std;

void show_volume(int length, int width = 1, int height = 1)
{
    cout << length * width * height << endl;
}

/*
void show_volume(int length, int width = 1, int height)
{
    this function has error
}
*/
// 매개변수의 디폴트 값 설정은 오른쪽에 있는 매개변수부터 이루어져야 한다.
// 또한, 매개변수의 디푤트 값 설정은 함수의 선언부에만 하면 정의부에는 할 필요가 없다.
int main(void)
{
    show_volume(2, 4, 6);
    show_volume(3, 5);
    show_volume(7);

    return 0;
}