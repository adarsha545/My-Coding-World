let n = 121;
let original = n;
let reverse = 0;
let remainder;
while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = parseInt(n / 10);

}
if (reverse == original) {
    console.log(original, " is Palindrome Number !!");
}
else {
    console.log(original, " is not Palindrome Number !!");
}