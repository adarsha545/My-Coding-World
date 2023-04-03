let n1 = 24;
let n2 = 48;
let lcm;
let max = (n1 > n2) ? n1 : n2;
while (1) {
    if (max % n1 == 0 && max % n2 == 0) {
        lcm = max;
        break;
    }
    ++max;
}
console.log("LCM of", n1, "and", n2, "is:", lcm);