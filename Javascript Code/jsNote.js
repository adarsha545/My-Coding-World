//Printing
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

//To change string to number use (+)before that string
//or use Number("that string")
var s = "50 ";
console.log(typeof s);
var p = +"50";
console.log(typeof p);

//String Concatination
console.log(s + n);

//Using Back-tips
console.log(`My name is ${name1} and it is ${p}`);

//Undefined datatype
let x;
console.log(typeof x);

// Bug in Java-script
console.log(typeof null); //it should be Null,not object

//BigInt
console.log(Number.MAX_SAFE_INTEGER);

//Converting into BigInt
let i = BigInt(12548);
let j = 4589658n;
console.log(i + j);
//Operation should be done BigInt with only BigInt

//In Js, == check only value not datatype
//To check datatype is same or not we use ===

//!= -> check only value
//!== ->check value with datatype

//Falsy Values
/* -> false, ->"", ->0, ->null, ->undefined */

//Truthy values
//->true, ->"abc", ->1

//Ternary Operator
let age = 21;
let drink = age >= 5 ? "Coffee" : "Milk";
console.log(drink);

//In js, Reference types are called Object

//To check the object is array or not
let arr = [25, "Adarsha", 8, null, undefined];
console.log(Array.isArray(arr));
console.log(arr);

//Push can change the original array & add element in the last
arr.push("AOT");
console.log(arr);

//Pop removed the last element in the array
let pop = arr.pop();
console.log(pop);
console.log(arr);

//Unshift add element in the first position in the array
arr.unshift(545);
console.log(arr);

//Shift remove the element from the first position in the array
let removed = arr.shift();
console.log(removed);
console.log(arr);

//Both pop & shift return the deleted element
//(Push & Pop) is faster than (Shift & Unshift),bcz after adding/deleting it shifts the remaining items









