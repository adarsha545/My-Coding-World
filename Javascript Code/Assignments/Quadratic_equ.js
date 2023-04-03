let a = 1;
let b = 1;
let c = 4;
let root1, root2;

let discriminant = (b ** 2 - 4 * a * c);
//If discriminant  > 0, then roots are real & different
if (discriminant > 0) {
    root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
    root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
    console.log("Root1 is : ", root1);
    console.log("Root2 is : ", root2);

}
//If discriminant  = 0, then roots are real & equal
else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    console.log("Root1 = Root2 : ", root1);
}
//If discriminant  < 0, then roots are complex & different
else {
    let i = "i";
    let real = (-b / (2 * a));
    let imag = Math.sqrt((-discriminant)) / (2 * a);
    console.log("Root1 is : ", real, "+", imag, "*", i);
    console.log("Root2 is : ", real, "-", imag, "*", i);
}
