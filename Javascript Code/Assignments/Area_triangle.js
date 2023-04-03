let a = 15;
let b = 10;
let c = 15;

let s = (a + b + c) / 2;
let d = s * (s - a) * (s - b) * (s - c);
console.log("The area of the triangle: ", Math.sqrt(d));