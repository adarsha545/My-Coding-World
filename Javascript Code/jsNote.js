console.log("Hello Adarsha !!");
//Variable Declaration
var name1 = "   Adarsha   ";
let name = "ad";
//always use let (better approach)
console.log(name1.length);
console.log(name1);
//String is immutable, the real one can't be changed..
//so make changes & store it in a new variable/same variable
//trim() -> To remove spaces 
name1 = name1.trim();
console.log(name1.length);
console.log(name1);
console.log(name1.toUpperCase());
console.log(name1.toLowerCase());
//slice()->starting index,ending index
var a = name1.slice(0, 5);
console.log(a);
//typeof -> To see the datatype
console.log(typeof a);
//To change into string use (+"") with that
//or use string(that thing)
var n = 10;
console.log(typeof n);
n = 10 + "";
console.log(typeof n);


