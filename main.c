#include<stdio.h>
#include<string.h>
#include<assert.h>
//void* myMemcpy(void* dist, const void* src, size_t num) {
//	assert(dist && src);
//	void* res = dist;
//	while (num--) {
//		*(char*)dist = *(char*)src;
//		dist = (char*)dist + 1;
//		src = (char*)src + 1;
//	}
//	return res;
//}
//int main() {
//	/*int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	myMemcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", arr2[i]);
//	}*/
//	int arr1[] = { 1,2,3,3,5,6,7,8,9,10 };
//	int arr2[10] = { 1,2,3,4,5 };
//	int ret= memcmp(arr1, arr2, sizeof(int) * 4);
//	printf("%d\n", ret);
//	return 0;
//}
//int main() {
//	char arr[] = "nihao wapiyan";
//	// °ÑnihaoÌæ»»³Éhello
//	memset(arr,'h', 5);
//	printf("%s\n", arr);
//	return 0;
//}
struct S1 {
	int i;
	char j;
	double d;
};
int main() {
	printf("%d",sizeof(struct S1));
	return 0;
}