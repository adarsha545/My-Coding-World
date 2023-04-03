// Printing
console.log("Hello Adarsha !!");

// Variable Declaration
var name1 = "   Adarsha   ";
let name = "ad";

// always use let (better approach)
console.log(name1.length);
console.log(name1);
// String is immutable, the real one can't be changed..
// so make changes & store it in a new variable/same variable

// trim() -> To remove spaces 
name1 = name1.trim();
console.log(name1.length);
console.log(name1);
console.log(name1.toUpperCase());
console.log(name1.toLowerCase());

// slice()->starting index,ending index
var a = name1.slice(0, 5);
console.log(a);

// typeof -> To see the datatype
console.log(typeof a);

// To change into string use (+"") with that
// or use string(that thing)
var n = 10;
console.log(typeof n);
n = 10 + "";
console.log(typeof n);

// To change string to number use (+)before that string
// or use Number("that string")
var s = "50 ";
console.log(typeof s);
var p = +"50";
console.log(typeof p);

// String Concatination
console.log(s + n);

// Using Back-tips
console.log(`My name is ${name1} and it is ${p}`);

// Undefined datatype
let x;
console.log(typeof x);

// Bug in Java-script
console.log(typeof null); //it should be Null,not object

// BigInt
console.log(Number.MAX_SAFE_INTEGER);

// Converting into BigInt
let i = BigInt(12548);
let j = 4589658n;
console.log(i + j);
// Operation should be done BigInt with only BigInt

// In Js, == check only value not datatype
// To check datatype is same or not we use ===

// != -> check only value
// !== ->check value with datatype

// Falsy Values
/* -> false, ->"", ->0, ->null, ->undefined */

// Truthy values
// ->true, ->"abc", ->1

// Ternary Operator
let age = 21;
let drink = age >= 5 ? "Coffee" : "Milk";
console.log(drink);

// In js, Reference types are called Object

// To check the object is array or not
let arr = [25, "Adarsha", 8, null, undefined];
console.log(Array.isArray(arr));
console.log(arr);

// Push can change the original array & add element in the last
arr.push("AOT");
console.log(arr);

// Pop removed the last element in the array
let pop = arr.pop();
console.log(pop);
console.log(arr);

// Unshift add element in the first position in the array
arr.unshift(545);
console.log(arr);

// Shift remove the element from the first position in the array
let removed = arr.shift();
console.log(removed);
console.log(arr);

// Both pop & shift return the deleted element
// (Push & Pop) is faster than (Shift & Unshift),bcz after adding/deleting it shifts the remaining items

// Array Clone
let array1 = [1, 2, 3, 4];

// process-1
let array2 = [1, 2, 3, 4];

// process-2
let array3 = array1.slice(0);
array3 = array1.slice(0).concat([5, 6]);

// process-3
let array4 = [].concat(array1);

// process-4
let array5 = [...array1, ...array2, "nice"];
console.log(array1, array2, array3, array4, array5);

//In constant array you can add/delete element,but you can't change the elements

// For of loop -> (By default it gives item)
for (let i of array5) {
    console.log(i);
}

// For in loop-> (By default it gives index)
for (let i in array5) {
    console.log(i);

}
// Converting index to item
for (let i in array5) {
    console.log(array5[i]);

}

// Array Destructring
let ar = ["ad", "ar", "sh", "a"];
let [val1, , val2, , val3] = ar;
console.log(val1);
console.log(val2);
// No iem present to assign, so it is undefined
console.log(val3);

// Objects are reference type
// Objects stored key value pairs
// objects don't have index
// createing object -> person
let person = { name: "Adarsha", age: 20, "His hobbies": ["anime", "coding"] };
console.log(person);
console.log(person.age);
console.log(person.hobbies);

// To add new pair
person.gender = "Male";
console.log(person);

// Another way to acess data
// By default key is string in Js
console.log(person["name"]);

// Advantage of using Bracket, if here we use dot then it give error bcz of space
console.log(person["His hobbies"]);
let k = "email";

// If we want to add email as key,not k as key then..inside bracket dont write k in double cot,write simple
person[k] = "adarshaghosh@gmail.com";
console.log(person);

// To iterate object->
// process-1 (without key)
for (let key in person) {
    console.log(person[key]);
}

// process-2 (with key pair)
for (let key in person) {
    console.log(`${key} : ${person[key]}`);
}

// To print only the keys
console.log(Object.keys(person));

// another way to print 
for (let key of Object.keys(person)) {
    console.log(person[key]);
}

// Computed Properties
const item1 = "clg";
const item2 = "CSE";
const name10 = "AOT";
const name11 = "4th";

// Process-1
const obj = {
    [item1]: name10,
    [item2]: name11
}
console.log(obj);

// Process-2
const obj2 = {};
obj2[item1] = name10;
obj2[item2] = name11;
console.log(obj2);

// Spread Operator -> (...)
// It can be done only in string,array, bcz they are immutable
// Number is not immutable,so there it is not possible
const newarray = [..."ADARSHA"];
console.log(newarray);

// spread operator in objects
// Two key in one object not possible,if it happen then it show the latest value
const obj5 = {
    f1: "Mango",
    f2: "Apple"
}
const obj6 = {
    f3: "banana",
    f4: "grapes"
}
const obj7 = { ...obj5, ...obj6, f5: "Fruitx" };
console.log(obj7);

// Spreading in string
const obj8 = { ..."Academy" }
console.log(obj8);

// Spreaing in Array
const obj9 = { ...["anime", "coding"] }
console.log(obj9);

// Object Destructuring
const Band = {
    BandName: "Fossils",
    Singer: "Rupam Islam",
    year: 2014
};
let { BandName, Singer, ...rest } = Band;
console.log(BandName);
console.log(rest);

// Objects inside Array
const users = [
    { userId: 01, FirstName: "Adarsha", age: 20 },
    { userId: 02, FirstName: "Lucifer", age: 56 },
    { userId: 31, FirstName: "kai", age: 26 },
]

// Printing
for (let user of users) {
    console.log(user.FirstName);
}

// From each user obj taking some specific property
const [{ FirstName }, , { userId }] = users;
console.log(FirstName);
console.log(userId);

// Changing the key's Name
const [{ FirstName: newname }, , { userId: newId }] = users;
console.log(newname);
console.log(newId);

// Function Declaration
function Print() {
    console.log("Today's date is : 03/04/2023");
    console.log("Today's Time is : 11:32 PM");
}
Print();

// Undefined + Undefined = Not a Number (NaN)

// Function Expresion
const Print2 = function () {
    console.log("Today's date is : 03/04/2023");
    console.log("Today's Time is : 11:46 PM");
}
Print2();

// Arrow Function
const Print3 = () => {
    console.log("Today's date is : 03/04/2023");
    console.log("Today's Time is : 11:55 PM");
}
Print3();

// Hoisting
// In Js, During Function Declaration we can call the function before its declaration.
// But in function Expression, Arrow Function it s not possible,it is called Hoisting.

// Same Case, for Var -> Function Declaation
// let/const -> function Expression/Arrow Function 

// Function inside Function
function write() {
    function Print10() {
        console.log("Today's date is : 04/04/2023");
        console.log("Today's Time is : 12:32 PM");
    }
    function Print11() {
        console.log("Today's date is : 04/04/2023");
        console.log("Today's Time is : 10:32 PM");
    }
    function Print12() {
        console.log("Today's date is : 04/04/2023");
        console.log("Today's Time is : 1:32 PM");
    }
    Print10();
    Print11();
}
write();

// Lexical Scope
// -> Local people dominate most, means if there have same name variable then it give prority in this way:
// local scope-1 > local scope - 2 > Global Scope
const myVar = "value1";
function myApp() {
    function myFunc() {
        // const myVar = "value59";
        const myFunc2 = () => {
            console.log("inside myFunc", myVar);
        }
        myFunc2();
    }
    console.log(myVar);
    myFunc();
}
myApp();

//  (Let and const) are block scope, means we can acess that variable only in that block.
//  Var is Function scope, means we can acess that variable from all over the programme.

// Default Parameters
function addTwo(a, b = 0) {
    return a + b;
}
const ans = addTwo(4, 8);
console.log(ans);

// Rest Parameters -> (...c)
function myFunc(a, b, ...c) {
    console.log(`a is ${a}`);
    console.log(`b is ${b}`);
    console.log(`c is`, c);
}
myFunc(3, 4, 5, 6, 7, 8, 9);

// Rest Parameters with example
function addAll(...numbers) {
    let total = 0;
    for (let number of numbers) {
        total = total + number;
    }
    return total;
}
const ans5 = addAll(4, 5, 4, 2, 10);
console.log(ans5);

// Parameter Destructuring
const man = {
    firstName: "Ravan",
    gender: "male",
    age: 500
}
function printDetails({ firstName, gender, age }) {
    console.log(firstName);
    console.log(gender);
    console.log(age);
}
printDetails(man);

// Callback Function -> here we can pass function as argument, and we can call that function on another function
function Func2(name) {
    console.log("Inside func2")
    console.log(`Your name is ${name}`);
}
function Func(callback) {
    console.log("Hello there, I am in func ")
    callback("Tanzio Kamada");
}
Func(Func2);

//Function returning Function -> here after calling a function, that function return a function
function myFunc() {
    function hello() {
        return "hello world";
    }
    return hello;
}
const answer = myFunc();
console.log(answer());

//For Each ->
//Example -1
const numbers = [4, 2, 5, 8];
numbers.forEach(function (number, index) {
    console.log(number * 3, index);
});

//Example-2
const user246 = [
    { firstName: "Akaza", age: 23 },
    { firstName: "Nezuko", age: 21 },
    { firstName: "Kashiro", age: 22 },
    { firstName: "Zenitsu", age: 20 },
]
user246.forEach(function (user) {
    console.log(user.firstName);
});

//  Map ->
//  In return, Map gives new array, so it is nessary to return value from that particular function.

//  Example -1
const nums = [3, 4, 6, 1, 8];
const square = function (num) {
    return num * num;
}
const squareNumber = nums.map(square);
console.log(squareNumber);

//Filter Method -> In it call back function return true/false, and it store the results in a new array.
const evenNumbers = nums.filter((number) => {
    return number % 2 === 0;
});
console.log(evenNumbers);

//Reduce Method
//Example -1 
const numb = [1, 2, 3, 4, 5, 10];
const sum = numb.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
});
console.log(sum);

/*accumulator , currentValue,  return
1               2              3 
3               3              6
6               4              10
10              5              15
15              10             25 */

//Example-2 
const userCart = [
    { productId: 1, productName: "mobile", price: 12000 },
    { productId: 2, productName: "laptop", price: 22000 },
    { productId: 3, productName: "tv", price: 15000 },
]
const totalAmount = userCart.reduce((totalPrice, currentProduct) => {
    return totalPrice + currentProduct.price;
}, 0)
//here 0 is for initialization of totalPrice, means totalPrice = 0 (at first)
console.log(totalAmount);

// total price      currentValue       return
// 0                {}                  12000
// 12000            22000               34000
// 34000            15000               49000

