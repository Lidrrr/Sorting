#include <iostream>
#include <vector>
using namespace std;

//   ð������
//1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
//2. ��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ��ⲽ���������Ԫ�ػ�����������
//3. ������е�Ԫ���ظ����ϵĲ��裬�������һ����
//4. ����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�
void BubbleSort(vector<int>& res, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (res[j] > res[j + 1])swap(res[j], res[j + 1]);
		}
	}
}


int main(int argc, char* argv[]) {
	vector<int>res({14,56,44,2,24});
	BubbleSort(res, res.size());
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] <<" ";
	}
}