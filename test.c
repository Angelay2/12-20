#include<stdio.h>
#include<stdlib.h>

//ð������
void BubbleSort(int arr[],int size){
	//ÿ������С�ķ�ʽ��ʵ��
	//bound ��ʾ�߽�
	//[0, bound] ����������
	//[bound, size] ����������
	//��һ��ѭ��, �� size ����СԪ��;
	for (int bound = 0; bound < size; bound++){
		//�ڶ���ѭ��,�������ҵ����˱Ƚ��е���СԪ��
		for (int cur = size - 1; cur > bound; cur--){
			if(arr[cur - 1] > arr[cur]){
				//˵����������������,�ͽ���Ԫ��
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

//��������
#define N 10
int two(){
	int a[N] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, i, tmp;
	printf("\nthe original Array is:\n");
	for (i = 0; i < N; i++){
		printf("%4d", a[i]);
	}

	for (i = 0; i < N / 2; i++){		//��������Ԫ��ʹ֮����
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
// for ѭ��ִ�й���
// 1. ���ʽ1(��ʼ������)
// 2. ���ʽ2(�ж�ѭ���Ƿ��ܽ���)
// 3. ѭ����
// 4. ���ʽ3(����ѭ������)
// 5. ���ʽ2(�ٴ��ж�ѭ���Ƿ��ܽ���)
int main(){
	int arr1[] = { 0, 8, 7, 3, 1, 4, 5, 9 };
	// i -> index(�±�)
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
