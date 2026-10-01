# Student Score Maximum - Max Heap vs Linear Search

## Given Question

A university wants to identify the highest student score from:

**78, 92, 65, 88, 95, 72, 84, 90**

### (a)
Implement a Max Heap and insert all scores. After every insertion, record the
heap arrangement.

### (b)
Find the highest score using:
- Max Heap
- Linear Search

Execute both methods and record the number of comparisons/operations.

### (c)
Analyse and compare:
- Finding the maximum
- Inserting a new score
- Increasing the number of students

Then justify the suitable data structure for continuously maintaining the
highest score.

## Repository Contents

- `01_A_MaxHeap_Insertion/` - Question (a)
- `02_B_FindMaximum/` - Question (b)
- `03_C_Performance_Analysis/` - Question (c)
- `README.md` - Assignment overview

## Final Result

Highest score = **95**

## Execution Counts

- Max Heap construction comparisons = **12**
- Max Heap maximum retrieval comparisons = **0**
- Linear Search comparisons = **7**

## Complexity Summary

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find maximum | O(1) after construction | O(n) |
| Insert | O(log n) worst case | O(1) to append |
| Extra space | O(n) | O(1) extra |

## Conclusion

Linear Search is simple for a one-time maximum search. Max Heap is suitable
when scores are continuously inserted and the maximum is queried repeatedly,
because the maximum is maintained at the root and can be obtained in O(1)
after the heap has been constructed.

## Compile

Question (a):
`gcc max_heap_insertion.c -o max_heap`

Question (b):
`gcc max_heap_vs_linear.c -o max_heap_vs_linear`
