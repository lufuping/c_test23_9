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
//	// 把nihao替换成hello
//	memset(arr,'h', 5);
//	printf("%s\n", arr);
//	return 0;
//}
#if 0
struct S1 {
	int i;
	char j;
	double d;
};
int main() {
	printf("%d", sizeof(struct S1));
	return 0;
}
#endif
#if 0
int main() {
	char arr[] = "hell oword";
	int len = strlen(arr);
	printf("%d\n", len);
	return 0;
}
#endif
#if 0
#include<assert.h>
size_t myStrlen(const char* arr) {
	assert(arr);
	size_t len = 0;
	while (*arr != '\0') {
		arr++;
		len++;
	}
	return len;
}
int main() {
	char arr[] = "hell oword";
	size_t len = myStrlen(arr);
	printf("%u\n", len);
	return 0;
}
#endif
#if 0
int main() {
	char arr[20] = { 0 };
	strcpy_s(arr, 8, "张三");
	printf("%s\n", arr);
	return 0;
}
#endif
#if 1
char* myStrcpy(char* dest, const char* source) {
	assert(dest && source);
	char* res = dest;
	while (*dest++ = *source++);
	return res;
}
char* myStrcat(char* dest, const char* source) {
	assert(dest && source);
	char* res = dest;
	while (*dest != '\0') {
		dest++;
	}
	while (*dest++ = *source++);
	return res;
}
int main() {
	char arr[20] = "我";
	myStrcat(arr,"爱你,亲爱的");
	//strcpy_s(arr, 8, "张三");
	//myStrcpy(arr, "张三");
	//printf("%d\n", sizeof("爱你"));
	printf("%s\n", arr);
	return 0;
}
#endif