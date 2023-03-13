// 1120313-02.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 類別

#include <iostream>
using namespace std;
//複數的定義

class complex {
private:
	int real, img;
public:
	complex(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	complex operator + (complex const& obj) {
		complex result;
		result.real = real + obj.real;
		result.img = img + obj.img;
		return result;
	}
	complex operator - (complex const& obj) {
		complex result;
		result.real = real - obj.real;
		result.img = img - obj.img;
		return result;
	}
	complex operator * (complex const& obj) {
		complex result;
		result.real = (real * obj.real-img * obj.img);
		result.img = (real * obj.img + img * obj.real);
		return result;
	}

	void display() {
		cout << real << " " << img << endl;

	}
};

int main()
{
	complex c1(1, 2);
	complex c2(2, -3);
	complex c3 = c1 + c2;
	complex c4 = c1 - c2;
	complex c5 = c1 * c2;
	c3.display();
	c4.display();
	c5.display();

}
