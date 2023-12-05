#include <iostream>
#include <vector>
using namespace std;

//   选择排序
//1. 在未排序序列中找到最小（大）元素，存放到排序序列的起始位置
//2. 从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾
//3. 以此类推，直到所有元素均排序完毕

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