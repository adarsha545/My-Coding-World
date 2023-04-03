let unit = 700;
let bill;
if (unit >= 0 && unit <= 102) {
    bill = unit * 5.30;
    console.log("Total Bill: ", bill);
}
else if (unit > 102 && unit <= 180) {
    bill = 102 * 5.30 + (unit - 102) * 5.97;
    console.log("Total Bill: ", bill);
}
else if (unit > 180 && unit <= 300) {
    bill = 102 * 5.30 + 78 * 5.97 + (unit - 180) * 6.97;
    console.log("Total Bill: ", bill);
}
else if (unit > 300) {
    bill = 102 * 5.30 + 78 * 5.97 + 120 * 6.97 + (unit - 300) * 7.31;
    console.log("Total Bill: ", bill);
}
else {
    console.log("Please enter valid unit !!");
}


