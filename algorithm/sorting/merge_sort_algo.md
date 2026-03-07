ALGORITHM MergeSort(arr, left, right)
INPUT: arr (array to sort), left (starting index), right (ending index)
OUTPUT: arr sorted in ascending order

1.  IF left >= right THEN
2.      RETURN  // Base case: single element or empty
3.  END IF
4.
5.  mid ← left + (right - left) / 2 // Find middle index
6.
7.  MergeSort(arr, left, mid) // Sort left half
8.  MergeSort(arr, mid + 1, right) // Sort right half
9.  Merge(arr, left, mid, right) // Merge sorted halves
10. END ALGORITHM

ALGORITHM Merge(arr, left, mid, right)
INPUT: arr (array), left, mid, right (boundaries of subarrays)
OUTPUT: arr with merged sorted subarrays

1.  n1 ← mid - left + 1 // Size of left subarray
2.  n2 ← right - mid // Size of right subarray
3.
4.  CREATE arrays L[n1] and R[n2] // Temporary arrays
5.
6.  FOR i ← 0 TO n1 - 1 DO // Copy left subarray
7.      L[i] ← arr[left + i]
8.  END FOR
9.
10. FOR j ← 0 TO n2 - 1 DO // Copy right subarray
11.     R[j] ← arr[mid + 1 + j]
12. END FOR
13.
14. i ← 0, j ← 0, k ← left // Initialize pointers
15.
16. WHILE i < n1 AND j < n2 DO // Merge smaller elements
17.     IF L[i] <= R[j] THEN
18.         arr[k] ← L[i]
19.         i ← i + 1
20.     ELSE
21.         arr[k] ← R[j]
22.         j ← j + 1
23.     END IF
24.     k ← k + 1
25. END WHILE
26.
27. WHILE i < n1 DO // Copy remaining left elements
28.     arr[k] ← L[i]
29.     i ← i + 1
30.     k ← k + 1
31. END WHILE
32.
33. WHILE j < n2 DO // Copy remaining right elements
34.     arr[k] ← R[j]
35.     j ← j + 1
36.     k ← k + 1
37. END WHILE
38.
39. END ALGORITHM
