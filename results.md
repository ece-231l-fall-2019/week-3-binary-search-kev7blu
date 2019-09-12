<<<<<<< HEAD
Found 237/1999 values.
Time to linear search all values: 1.48532s
Found 237/1999 values.
Time to linear search all values (pointers): 1.27757s
Found 122/1999 values.
Time to binary search all values: 0.000270833s
Found 0/1999 values.
Time to binary search all values (pointers): 7.879e-06s
=======
# Results

### "Make" (without optimazations)
| Search Type          |Time         |
|:--------------------:|:-----------:|
| Binarysearch vector  | 2.58028s    |
| Binarysearch pointer | 2.4399s     |
| Linearsearch vector  | 0.0012532s  |
| Linearsearch pointer | 0.00169798s |

### "Make fast" (with optimazations)
| Search Type          |Time          |
|:--------------------:|:------------:|
| Binarysearch vector  | 2.38837s     |
| Binarysearch pointer | 1.69741s     |
| Linearsearch vector  | 0.000420409s |
| Linearsearch pointer | 0.000457468s |

As you can see from the above data the time varys between each trial. With optimazations it is faster than without them and the linear searches seems to be faster.

With no ops the times for each to finish is much slower, but notice that the linearsearches are faster than the binarysearches. 
The vector functions operates slighty faster than the pointers functions.

With ops the times are faster than with no ops. The linearsearch vector that has ops is the fastest at finding all the values. 

organized from 1st to 8th is the placements for all the searches.

linearsearch vector with ops is the fastest and the slowest one is the binarysearch without ops.

### Which is faster?
|Placement|Search Type           |Time          | Ops?|
|:-------:|:--------------------:|:------------:|:---:|
|1        | Linearsearch vector  | 0.000420409s | yes |
|2        | Linearsearch pointer | 0.000457468s | yes |
|3        | Linearsearch vector  | 0.0012532s   | no  |
|4        | Linearsearch pointer | 0.00169798s  | no  |
|5        | Binarysearch vector  | 2.38837s     | yes |
|6        | Binarysearch pointer | 1.69741s     | yes |
|7        | Binarysearch pointer | 2.4399s      | no  |
|8        | Binarysearch vector  | 2.58028s     | no  |
>>>>>>> a4c715846958b8c356d0b5ca1aea275e3f8e2e3f
