let n1 = 24;
let n2 = 48;
let gcd;
let min = (n1 < n2) ? n1 : n2;
for (let i = 1; i <= min; i++) {
    if (n1 % i == 0 && n2 % i == 0) {
        gcd = i;
    }
}
console.log("GCD of", n1, "and", n2, "is:", gcd);