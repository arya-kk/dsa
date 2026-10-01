#include <stdio.h>
#define MAX 100

int heap[MAX];
int heapSize = 0;
int heapComparisons = 0;
int linearComparisons = 0;

void insertMaxHeap(int value)
{
    int i = heapSize;
    heap[heapSize++] = value;

    while (i > 0)
    {
        int parent = (i - 1) / 2;
        heapComparisons++;

        if (heap[parent] >= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;
        i = parent;
    }
}

int findMaxUsingHeap()
{
    /* In a Max Heap, maximum is always at the root. */
    return heap[0];
}

int findMaxUsingLinearSearch(int a[], int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        linearComparisons++;

        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int n, scores[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    /* Build Max Heap */
    for (int i = 0; i < n; i++)
        insertMaxHeap(scores[i]);

    printf("\nQUESTION (b) - FIND THE HIGHEST SCORE\n");

    printf("Maximum using Max Heap     : %d\n", findMaxUsingHeap());
    printf("Maximum using Linear Search: %d\n",
           findMaxUsingLinearSearch(scores, n));

    printf("\nMax Heap construction comparisons : %d\n", heapComparisons);
    printf("Max Heap maximum retrieval comparisons: 0\n");
    printf("Linear Search comparisons         : %d\n", linearComparisons);

    return 0;
}
