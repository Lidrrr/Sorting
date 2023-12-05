#include <iostream>
#include <vector>
using namespace std;



//   快速排序
//1. 选取第一个数为基准
//2. 将比基准小的数交换到前面，比基准大的数交换到后面
//3. 对左右区间重复第二步，直到各区间只有一个数
int Partition(vector<int>& res, int low, int high) {
	int pivot = res[low];
	while (low < high) {
		while (low < high && pivot<=res[high])high--;
		res[low] = res[high];
		while (low < high && pivot >= res[low])low++;
		res[high] = res[low];
	}
	res[low] = pivot;
	return low;
}

void QuickSort(vector<int>& res, int low, int high) {
	if (low < high) {
		int pivot = Partition(res, low, high);
		QuickSort(res, low, pivot - 1);
		QuickSort(res, pivot + 1, high);
	}
}


int main(int argc, char* argv[]) {
	vector<int>res({14,56,44,2,24});
	QuickSort(res, 0, res.size()-1);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] <<" ";
	}
}