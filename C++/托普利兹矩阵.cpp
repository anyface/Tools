#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	bool isToeplotMatrix(vector<vector<int>> Matrix) {
		int m = Matrix.size(), n = Matrix[0].size(),p=m-1,q=0; // �ҳ����������������
		while (p >= 0 && q < n) {
			int val = Matrix[p][q], i = p+1, j = q+1;
			cout << "�Աȵ����֣�" << val << endl;
			while (i < m && j < n) {
				cout << Matrix[i][j] << endl;
				if (Matrix[i][j] != val) {
					return false;
				}
				i = i + 1;
				j = j + 1;
			}
			(p > 0) ? p-- : q++; // ���������ת��

		}
		return true;
	}
};


int main() {
	vector<vector<int>> M = { {1,2,3,4},{5,1,2,3},{9,5,1,2} };
	Solution ss;
	cout.setf(ios::boolalpha);
	cout << ss.isToeplotMatrix(M) << endl;
	cin.get();
	return 0;
}