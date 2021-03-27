// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = *arr-2;
  int right = size; 
  int schet = 0;
  if (value == 0)
  return 0;// если ничего не найдено
  else {
  do {
     left += 1;
     if(value == arr[left])
     schet += 1;
  }while (left <= right);
  return schet;
  }
}
