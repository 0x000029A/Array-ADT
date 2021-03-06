#ifndef ARRAY_ADT_H
#define ARRAY_ADT_H
/* To use the program:
 * 1) Create an array with the values you want.
 * 2) Pass the array size and the array tp INIT function.
 * 3) if function returned 1, it succeeded.
 * Errors:
 * -1 -> Invalid inputs
 * -2 -> Not found
 * -3 -> Maximum size reached
 */
typedef struct array {
    int *A;
    int size;
    int length;
} array;

int arr_init(array *farray, int array_size, int array_length, const int *arr);
void arr_disp(array *farray);
int arr_append(array *farray, int element_v);
int arr_insert(array *farray, int index, int element_v);
int arr_delete(array *farray, int index);
int arr_lsearch(array *farray, int key);
int arr_bsearch(array *farray, int key);
void arr_set(array *farray, int index, int element_v);
int arr_get(array *farray, int index);
int arr_avg(array *farray);
int arr_max(array *farray);
int arr_sum(array *farray);
int arr_min(array *farray);
int arr_reverse(array *farray);
int arr_isSorted(array *farray);
void arr_sinsert(array *farray, int element_v);
void arr_smerge(array *farray1, array *farray2, array *farray3);
void arr_rrotate(array *farray);
void arr_lrotate(array *farray);
void arr_rshift(array *farray);
void arr_lshift(array *farray);

// TODO Menu Driver
// TODO APPEND ARRAY
// TODO Sign Sort
// TODO concat
// TODO compare
// TODO copy
// TODO Union
// TODO Intersection

#endif