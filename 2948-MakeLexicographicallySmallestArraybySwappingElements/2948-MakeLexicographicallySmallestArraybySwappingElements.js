// Last updated: 8/29/2026, 12:50:14 PM
1const lexicographicallySmallestArray = (A, limit) => {
2    const arr = [...A.entries()].sort((a, b) => a[1] - b[1]);
3    let l = 0;
4
5    arr.forEach((c, i) => {
6        if (i === arr.length - 1 || arr[i + 1][1] - c[1] > limit) {
7            arr.slice(l, i + 1)
8                .map(([j]) => j)
9                .sort((a, b) => a - b)
10                .forEach((idx, k) => A[idx] = arr[l + k][1]);
11            l = i + 1;
12        }
13    });
14
15    return A;
16};