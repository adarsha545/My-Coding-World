let n = 2;
let flag = 0;
let i;
if (n == 0 || n == 1) {
    flag = 1;
}
for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
        flag = 1;
        break;
    }
}
if (flag == 0) {
    console.log(n, "is a Prime Number !!");
}
else {
    console.log(n, "is not a Prime Number !!");
}
