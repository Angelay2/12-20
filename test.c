#include<stdio.h>
#include<stdlib.h>

//冒泡排序
void BubbleSort(int arr[],int size){
	//每次找最小的方式来实现
	//bound 表示边界
	//[0, bound] 已排序区间
	//[bound, size] 待排序区间
	//第一重循环, 找 size 次最小元素;
	for (int bound = 0; bound < size; bound++){
		//第二重循环,帮我们找到这趟比较中的最小元素
		for (int cur = size - 1; cur > bound; cur--){
			if(arr[cur - 1] > arr[cur]){
				//说明不符合升序排序,就交换元素
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int one(){
	int arr[] = { 1, 9, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//逆序排列
#define N 10
int two(){
	int a[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, i, tmp;
	printf("\nthe original Array is:\n");
	for (i = 0; i < N; i++){
		printf("%4d", a[i]);
	}

	for (i = 0; i < N / 2; i++){		//交换数组元素使之逆序
		tmp = a[i];
		a[i] = a[N - i - 1];
		a[N - i - 1] = tmp;
	}
	printf("\nthe changed Array is:\n");
	for (i = 0; i < N; i++){
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
// for 循环执行过程
// 1. 表达式1(初始化过程)
// 2. 表达式2(判定循环是否能进入)
// 3. 循环体
// 4. 表达式3(更新循环变量)
// 5. 表达式2(再次判定循环是否能进入)
int main(){
	int arr1[] = { 0, 8, 7, 3, 1, 4, 5, 9 };
	// i -> index(下标)
	for (int i = 0; i < sizeof(arr1)/sizeof(int); i ++){
		printf("%d ", arr1[i]);
		
	}
	printf("\n");
	short arr2[] = { 0, 8, 7, 3, 1, 4, 5, 9 };
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++){
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
