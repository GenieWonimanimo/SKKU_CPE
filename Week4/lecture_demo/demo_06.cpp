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
// �Ű������� ����Ʈ �� ������ �����ʿ� �ִ� �Ű��������� �̷������ �Ѵ�.
// ����, �Ű������� ��ǧƮ �� ������ �Լ��� ����ο��� �ϸ� ���Ǻο��� �� �ʿ䰡 ����.
int main(void)
{
    show_volume(2, 4, 6);
    show_volume(3, 5);
    show_volume(7);

    return 0;
}