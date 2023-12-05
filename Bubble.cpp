#include <iostream>
#include <vector>
using namespace std;

//   冒泡排序
//1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
//2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。
//3. 针对所有的元素重复以上的步骤，除了最后一个。
//4. 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
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