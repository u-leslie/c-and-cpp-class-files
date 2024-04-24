#include <stdio.h>
int main()
{
	int arr[100], n,i,j,temp;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
   for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
//    int n = 5;
//    int arr[] = {4,5,1,3,6};
    for( i = 0; i < n; i++) {
        for( j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for( i = 0; i < n; i++)  {
        printf("%d ", arr[i]);
    }
    return 0;
}
8:09
insertion
8:09
#include <stdio.h>
    // function to print the elements of the array
void display(int arr[], int n) {
int i;
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
// function to sort the elements of the array
void insertionSort(int arr[], int n) {
	int i;
  for ( i = 1; i < n; i++) {
    int tmp = arr[i];
    int j = i - 1;
    while (tmp < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = tmp;
  }
}
// main function or driver function
 int main() {
  int arr[] = {9, 5, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Elements before sorting:\n");
  display(arr, n);
  insertionSort(arr, n);
  printf("Elements after sorting:\n");
  display(arr, n);
};
