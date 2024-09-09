​To prevent solving it by brute force, the idea is to turn the problem into two-sum. 
Ensure first that the vector is at least 3 elements. Sort the vector. Fix a number and sum the first and last and make sure they equal 0.
If too small, increase left number. If too big, decrease right number. Ensure no duplicates are present. Add to result vector.
