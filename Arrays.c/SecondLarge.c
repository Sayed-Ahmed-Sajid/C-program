/*find the second largest element in the given array*/

#include<stdio.h>
#include<limits.h>

int main() {
    int n, i;
    printf("n:");
    scanf("%d", &n);
    int A[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    for (i = 0; i < n; i++) {
        if (A[i] > max) {
            smax = max;
            max = A[i];
        } else if (A[i] > smax && A[i] != max) {
            smax = A[i];
        }
    }

    printf("%d", smax);

    return 0;
}
/*explanation:
In the loop where you're trying to find the second largest element, you're checking if the current element is not equal to the current maximum (A[i] != max) and if it's greater than the current second maximum (smax < A[i]). This logic might not work in all cases. Consider the following example:

Suppose the array is: [1, 3, 2, 4, 5]

Initially, max is set to INT_MIN and smax is set to INT_MIN.

A[0] = 1, max and smax are updated to 1.
A[1] = 3, max is updated to 3 and smax remains 1.
A[2] = 2, smax is updated to 2. At this point, max is 3 and smax is 2.
A[3] = 4, max is updated to 4 and smax remains 2.
A[4] = 5, max is updated to 5 and smax remains 2.
In this case, the second largest element should be 4, but your code outputs 2.*/