#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *getConcatenation(int* nums, int numsSize, int* returnSize) {
	int* ans = (int*)malloc(sizeof(int) * 2 * numsSize);
	for (int i = 0; i < 2 * numsSize; i++) {
		ans[i] = nums[i % numsSize];
	}
	*returnSize = 2 * numsSize;
	return ans;
}