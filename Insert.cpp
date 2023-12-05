#include <iostream>
#include <vector>
using namespace std;

//   ��������
//1. �ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
//2. ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
//3. �����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
//4. �ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
//5. ����Ԫ�ز��뵽��λ�ú�
//6. �ظ�����2~5

void InsertSort(vector<int>& res, int len) {
	
	for (int i = 1; i < len; i++) {
		int temp = res[i];
		for (int j = i - 1; j >= 0; j--) {
			if (res[temp] < res[j]) {
				res[j + 1] = res[j];
				res[j] = temp;
			}
			else break;
		}
	}
}


int main(int argc, char* argv[]) {
	vector<int>res({14,56,44,2,24});
	InsertSort(res, res.size());
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] <<" ";
	}
}