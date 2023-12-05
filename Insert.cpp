#include <iostream>
#include <vector>
using namespace std;

//   插入排序
//1. 从第一个元素开始，该元素可以认为已经被排序
//2. 取出下一个元素，在已经排序的元素序列中从后向前扫描
//3. 如果该元素（已排序）大于新元素，将该元素移到下一位置
//4. 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
//5. 将新元素插入到该位置后
//6. 重复步骤2~5

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