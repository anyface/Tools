#include "stdafx.h"
#include<iostream>
// ��n����x�ƶ���z������y����㣺X��n�� �����ʣ�Y���յ㣺Z��-->��㣺X �����ʣ�Y���յ㣺Z��n��
void towerhannoi(int n,char x,char y,char z) {
	if (n) {
		towerhannoi(n - 1, x, z, y); // ��㣺X��n�� �����ʣ�Y���յ㣺Z -->��㣺X��1�� �����ʣ�Y(n-1)���յ㣺Z
		std::cout << x << "->" << z << std::endl; //��㣺X��1�� �����ʣ�Y(n-1)���յ㣺Z -->��㣺X �����ʣ�Y(n-1)���յ㣺Z(1)
		towerhannoi(n - 1, y, x , z);
	
	}
}
int main()
{
	towerhannoi(3,'X','Y','Z');
	while (1);

    return 0;
}

