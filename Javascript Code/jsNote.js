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

//Array Clone
let array1 = [1, 2, 3, 4];

//process-1
let array2 = [1, 2, 3, 4];

//process-2
let array3 = array1.slice(0);
array3 = array1.slice(0).concat([5, 6]);

//process-3
let array4 = [].concat(array1);

//process-4
let array5 = [...array1, ...array2, "nice"];
console.log(array1, array2, array3, array4, array5);

//In constant array you can add/delete element,but you can't change the elements

//For of loop -> (By default it gives item)
for (let i of array5) {
    console.log(i);
}

//For in loop-> (By default it gives index)
for (let i in array5) {
    console.log(i);

}
//Converting index to item
for (let i in array5) {
    console.log(array5[i]);

}

//Array Destructring
let ar = ["ad", "ar", "sh", "a"];
let [val1, , val2, , val3] = ar;
console.log(val1);
console.log(val2);
//No iem present to assign, so it is undefined
console.log(val3);

//Objects are reference type
//Objects stored key value pairs
//objects don't have index
//createing object -> person
let person = { name: "Adarsha", age: 20, "His hobbies": ["anime", "coding"] };
console.log(person);
console.log(person.age);
console.log(person.hobbies);

//To add new pair
person.gender = "Male";
console.log(person);

//Another way to acess data
//By default key is string in Js
console.log(person["name"]);

//Advantage of using Bracket, if here we use dot then it give error bcz of space
console.log(person["His hobbies"]);
let k = "email";

//If we want to add email as key,not k as key then..inside bracket dont write k in double cot,write simple
person[k] = "adarshaghosh@gmail.com";
console.log(person);

//To iterate object->
//process-1 (without key)
for (let key in person) {
    console.log(person[key]);
}

//process-2 (with key pair)
for (let key in person) {
    console.log(`${key} : ${person[key]}`);
}

//To print only the keys
console.log(Object.keys(person));

//another way to print 
for (let key of Object.keys(person)) {
    console.log(person[key]);
}