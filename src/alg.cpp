// Copyright 2021 NNTU-CS
#include "alg.h"

int cbinsearch(int *arr, int size, int value) {
int left = 0,
int right = size - 1,
int c = 0;
while (left < right) {
int m = (left + right) / 2;
if (arr[m] < value)
left = m + 1;
else
right = m;
}

if (arr[left] == value) {
while (arr[left] == value) {
c++;
left++;
}
}

if (c)
return c;
else
return 0;
}
