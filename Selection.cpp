#include <iostream>
#include <vector>
using namespace std;

//   ѡ������
//1. ��δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ��
//2. ��ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ
//3. �Դ����ƣ�ֱ������Ԫ�ؾ��������

void SelectionSort(vector<int>& res, int len) {
	int min;
	for (int i = 0; i < len - 1; i++) {
		min = i;
		for (int j = i + 1; j < len; j++) {
			if (res[min] > res[j])min = j;
		}
		if (i != min)swap(res[i], res[min]);
	}
}


int main(int argc, char* argv[]) {
	vector<int>res({14,56,44,2,24});
	SelectionSort(res, res.size());
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] <<" ";
	}
}