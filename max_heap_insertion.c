#include <stdio.h>
#define MAX 100

int heap[MAX];
int heapSize = 0;
int comparisons = 0;

void insertMaxHeap(int value)
{
    int i = heapSize;
    heap[heapSize++] = value;

    while (i > 0)
    {
        int parent = (i - 1) / 2;
        comparisons++;

        if (heap[parent] >= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;
        i = parent;
    }
}

void displayHeap()
{
    for (int i = 0; i < heapSize; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main()
{
    int n, score;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        insertMaxHeap(score);

        printf("After inserting %d: ", score);
        displayHeap();
    }

    printf("\nFinal Max Heap: ");
    displayHeap();

    printf("Insertion comparisons: %d\n", comparisons);

    return 0;
}
