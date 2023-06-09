#include <iostream>
using namespace std;
class Vector4
{
public:
	Vector4(int a1, int a2, int a3, int a4)
	{
		v[0] = a1; v[1] = a2; v[2] = a3; v[3] = a4;
	}
	int& operator[](int bi);
private:
	int v[4];
};

int& Vector4::operator[](int bi)
{
	if (bi < 0 || bi >= 4)
	{
		cout << "Bad subscript!\n";
		exit(1);
	}
	return v[bi];
}

int main()
{
	Vector4 v(1, 2, 3, 4);
	cout << v[2] << endl;
	v[3] = v[2];
	cout << v[3] << endl;
	v[2] = 22;
	cout << v[2];
}