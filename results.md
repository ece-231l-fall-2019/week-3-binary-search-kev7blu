# Results

### "Make" (without optimazations)
| Search Type          |Time         |
|:--------------------:|:-----------:|
| Linearsearch vector  | 2.58028s    |
| Linearsearch pointer | 2.4399s     |
| Binarysearch vector  | 0.0012532s  |
| Binarysearch pointer | 0.00169798s |

### "Make fast" (with optimazations)
| Search Type          |Time          |
|:--------------------:|:------------:|
| Linearsearch vector  | 2.38837s     |
| Linearsearch pointer | 1.69741s     |
| Binarysearch vector  | 0.000420409s |
| Binarysearch pointer | 0.000457468s |

As you can see from the above data the time varys between each trial. With optimazations it is faster than without them and the binary searches seems to be faster.

With no ops the times for each to finish is much slower, but notice that the binarysearches are faster than the linearsearches. 
The vector functions operates slighty faster than the pointers functions.

With ops the times are faster than with no ops. The binarysearch vector that has ops is the fastest at finding all the values. 

organized from 1st to 8th is the placements for all the searches.

Binarysearch vector with ops is the fastest and the slowest one is the linearsearch without ops.

This is the case because binarysearch cuts the amount of searching for the values by 1/2. while linearsearch has to go through every value and takes twice the time.

### Which is faster?
|Placement|Search Type           |Time          | Ops?|
|:-------:|:--------------------:|:------------:|:---:|
|1        | Binarysearch vector  | 0.000420409s | yes |
|2        | Binarysearch pointer | 0.000457468s | yes |
|3        | Binarysearch vector  | 0.0012532s   | no  |
|4        | Binarysearch pointer | 0.00169798s  | no  |
|5        | Linearsearch vector  | 2.38837s     | yes |
|6        | Linearsearch pointer | 1.69741s     | yes |
|7        | Linearsearch pointer | 2.4399s      | no  |
|8        | Linearsearch vector  | 2.58028s     | no  |
