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
  [item2]: name11,
};
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
  f2: "Apple",
};
const obj6 = {
  f3: "banana",
  f4: "grapes",
};
const obj7 = { ...obj5, ...obj6, f5: "Fruitx" };
console.log(obj7);

// Spreading in string
const obj8 = { ..."Academy" };
console.log(obj8);

// Spreaing in Array
const obj9 = { ...["anime", "coding"] };
console.log(obj9);

// Object Destructuring
const Band = {
  BandName: "Fossils",
  Singer: "Rupam Islam",
  year: 2014,
};
let { BandName, Singer, ...rest } = Band;
console.log(BandName);
console.log(rest);

// Objects inside Array
const users = [
  { userId: 01, FirstName: "Adarsha", age: 20 },
  { userId: 02, FirstName: "Lucifer", age: 56 },
  { userId: 31, FirstName: "kai", age: 26 },
];

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
};
Print2();

// Arrow Function
const Print3 = () => {
  console.log("Today's date is : 03/04/2023");
  console.log("Today's Time is : 11:55 PM");
};
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
    };
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
  age: 500,
};
function printDetails({ firstName, gender, age }) {
  console.log(firstName);
  console.log(gender);
  console.log(age);
}
printDetails(man);

// Callback Function -> here we can pass function as argument, and we can call that function on another function
function Func2(name) {
  console.log("Inside func2");
  console.log(`Your name is ${name}`);
}
function Func(callback) {
  console.log("Hello there, I am in func ");
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
];
user246.forEach(function (user) {
  console.log(user.firstName);
});

//  Map ->
//  In return, Map gives new array, so it is nessary to return value from that particular function.

//  Example -1
const nums = [3, 4, 6, 1, 8];
const square = function (num) {
  return num * num;
};
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
];
const totalAmount = userCart.reduce((totalPrice, currentProduct) => {
  return totalPrice + currentProduct.price;
}, 0);
//here 0 is for initialization of totalPrice, means totalPrice = 0 (at first)
console.log(totalAmount);

// total price      currentValue       return
// 0                {}                  12000
// 12000            22000               34000
// 34000            15000               49000

// Sort Method

// By default, it takes number as a string, and sort them according to their ASCII value of 1st letter.
// During sorting, it changes the real array,so we need to clone that array.
const numbers6 = [5, 9, 1200, 410, 3000];
numbers.sort((a, b) => a - b);
console.log(numbers6);

// How it works
// 1200,410
// a-b ---> 790
// a-b ---> postive (greater than 0) ---> b, a
// 410 , 1200
// a-b ---> negative ----> a,b
// 5, 9 ---> -4

//Another Example

const products = [
  { productId: 1, produceName: "p1", price: 300 },
  { productId: 2, produceName: "p2", price: 3000 },
  { productId: 3, produceName: "p3", price: 200 },
  { productId: 4, produceName: "p4", price: 8000 },
  { productId: 5, produceName: "p5", price: 500 },
];
// Low To High
const lowToHigh = products.slice(0).sort((a, b) => {
  return a.price - b.price;
});
// High to Low
const highToLow = products.slice(0).sort((a, b) => {
  return b.price - a.price;
});
console.log(lowToHigh);
console.log(highToLow);

// Find Method

// It is used to find any item
// In this example, when the length of the string is become 3, then it reurn that particular item
// It always return the first item, that matches the rules first
const myArray = ["Hello", "catt", "dog", "lion"];
const anss = myArray.find((string) => string.length === 3);
console.log(anss);

// Another Example
const useres = [
  { userId: 1, userName: "harshit" },
  { userId: 2, userName: "harsh" },
  { userId: 3, userName: "nitish" },
  { userId: 4, userName: "mohit" },
  { userId: 5, userName: "aaditya" },
];
const myUser = useres.find((user) => user.userId === 3);
console.log(myUser);

// Every Method

// It returns boolean value (true/false)
// It returns true when all the items satisfices the condition, otherwise it returns false.
const numbs = [2, 4, 6, 9, 10];
const even = numbs.every((number) => number % 2 === 0);
console.log(even);

//Some Method

// It returns boolean value (true/false)
// It returns true when any of the items satisfices the condition, otherwise it returns false.
const nuber = [3, 8, 11, 9];
const result = nuber.some((number) => number % 2 === 0);
console.log(result);

//Another Example

const usercart = [
  { productId: 1, productName: "mobile", price: 12000 },
  { productId: 2, productName: "laptop", price: 22000 },
  { productId: 3, productName: "tv", price: 35000 },
  { productId: 3, productName: "macbook", price: 25000 },
];
const re = userCart.some((cartItem) => cartItem.price > 100000);
console.log(re);

// Fill Method

// Positions -> (Value,start,end)
// Go to last -> end-1
// It is used to fill the array with any value
const myA = [1, 2, 3, 4, 5, 6, 7, 8];
myA.fill(0, 2, 5);
console.log(myA);

// Splice Method

// Positions _> (start , delete , insert )
// It changes the original array, and return the deleted item

const myray = ["item1", "item2", "item3"];

// delete
const deleteItem = myray.splice(1, 2);
console.log("deleted item", deleteItem);
console.log(myray);

// insert
myray.splice(1, 0, "inserted item");
console.log(myray);

// insert and delete
const deletedItem = myray.splice(1, 2, "inserted item1", "inserted item2");
console.log("deleted item", deletedItem);
console.log(myray);

// Iterables

// In which we can use for of loop, like String, Array

//For String
const firstName = "Demon Slayer";
for (let char of firstName) {
  console.log(char);
}

//For Array
const items = ["item1", "item2", "item3"];
for (let item of items) {
  console.log(item);
}
//Objects are not Iterable

//Array like Object

// They have Length Property, and we can acess them via index, Example ->string
const firstame = "Muzan Kibutsuzi";
console.log(firstame.length);
console.log(firstame[2]);

//* Set
//? Set is iterable, No index based acess
//! In set Duplicate items are not allowed, but two different array with same item name can be add in the set
//* As set is iterable so we can use for of loop
//? In set length property does not support
// Order is not guarnted
const element = ["item1", "item2", "item3"];
const element1 = new Set();
element1.add(1);
element1.add(2);
element1.add(element);
console.log(element1);

//Example
const Ar = [1, 2, 4, 4, 5, 6, 5, 6];
const uniqueElements = new Set(Ar);
let length = 0;
console.log(uniqueElements);
for (let element of uniqueElements) {
  length++;
}
console.log(length);

//* Map object
//? In Object literal, Keys are either in string(99%) or symbol(1%) format
// In Map also elements are also in key value pair
//! In Map, Keys will be any format, we can't acess items using Dot/Bracket, rather use get function
//? As Object are non-iterable, so we can't use (for of loop) there,rather use (for in loop)
//Todo But in Map we can use (For of Loop) Directly

const person97 = new Map();
person97.set("firstName", "Harshit");
person97.set("age", 7);
person97.set(1, "one");
person97.set([1, 2, 3], "onetwothree");
person97.set({ 1: "one" }, "onetwothree");
console.log(person97);

//! Using Get function
console.log(person97.get(1));

//! Using For-of-loop
for (let key of person97.keys()) {
  console.log(key, typeof key);
}

//* Object-object pairing

const person1 = {
  id: 1,
  firstName: "harshit",
};
const person2 = {
  id: 2,
  firstName: "harshta",
};
const extraInfo = new Map();
extraInfo.set(person1, { age: 8, gender: "male" });
extraInfo.set(person2, { age: 9, gender: "female" });
console.log(extraInfo);
console.log(person1.id);
console.log(extraInfo.get(person1).gender);
console.log(extraInfo.get(person2).gender);

//* Clone using Object.assign

// There have two different array, with different memory address
const obje = {
  key1: "value1",
  key2: "value2",
};

const obj22 = Object.assign({}, obje);
obje.key3 = "value3";
console.log(obje);
console.log(obj22);

//* Optional chaining
//?  (?)-> it checks the current value is present or not, if not present then it shows Undefined, or if present then it moves further
const user = {
  firstName: "Tanzio",
  //address: { houseNumber: "1234" },
};
console.log(user?.firstName);
console.log(user?.address?.houseNumber);

//* Methods ->  function inside object
//! this -> It represents the whole object, using this keyword we can acess any key inside that object

function personInfo() {
  console.log(`person name is ${this.firstName} and age is ${this.age}`);
}
const person70 = {
  firstName: "harsh",
  age: 8,
  about: personInfo,
};
const person71 = {
  firstName: "mohit",
  age: 18,
  about: personInfo,
};
const person72 = {
  firstName: "nitish",
  age: 17,
  about: personInfo,
};
person70.about();
person71.about();
person72.about();

//* "use strict";
//? if we print this keyword, it gives by default window as object, to avoid this use "use strict"

//* Call method
//! we can use any function, by calling (call function) and passing that particular object as this keyword,in call function
function about(hobby, favMusician) {
  console.log(this.firstName, this.age, hobby, favMusician);
}
const user1 = {
  firstName: "Demon",
  age: 8,
};
const user2 = {
  firstName: "slayer",
  age: 9,
};
about.call(user1, "Guiter", "Arman Malik");
about.call(user2, "drump", "Ritviz");

//* Apply Method
//? Here we can pass more than one element as array
about.apply(user1, ["flute", "Rupam"]);

//* Bind Method
//? Here bind returns a function, where values of the keys are stored.
const fun = about.bind(user1, "instrument", "anupam");
fun();

//! !!! WARNING !!!
const user13 = {
  firstName: "LUCIFER",
  age: 777,
  about: function () {
    console.log(this.firstName, this.age);
  },
};
user13.about();
//* Using bind Method
const myFunct = user13.about.bind(user13);
//? here if we don't use bind method, then window will be work as this keyword
myFunct();

//! In Arrow Function, (this keyword) takes value from its surroundings, it takes value one step upper.
//todo, We can't change the value of this keyword in arrow function

//* Object.create -> It create Empty object & also make chain with reference object via __proto__
//! Means, __proto__ is a reference of the current object.
//? During running, if compiler does not finfd any method/property in the current object then it check in the __proto__ of the referene object
// __proto__ and [[prototype]] are same, but prototype is different thing
const userMethods = {
  about: function () {
    return `${this.firstName} is ${this.age} years old.`;
  },
  is18: function () {
    return this.age >= 18;
  },
  sing: function () {
    return "toon na na na la la ";
  },
};
function createUser(firstName, lastName, email, age, address) {
  const user50 = Object.create(userMethods); // {}
  user50.firstName = firstName;
  user50.lastName = lastName;
  user50.email = email;
  user50.age = age;
  user50.address = address;
  return user50;
}
const user51 = createUser(
  "harshit",
  "vashsith",
  "harshit@gmail.com",
  9,
  "my address"
);
const user52 = createUser(
  "harsh",
  "vashsith",
  "harshit@gmail.com",
  19,
  "my address"
);
const user53 = createUser(
  "mohit",
  "vashsitha",
  "harshit@gmail.com",
  17,
  "my address"
);
console.log(user51);
console.log(user51.about());
console.log(user53.sing());

//* Prototype -> It is just empty object ({}), where present only one function that is Constructor
//? In Js, Function = Function + Object
// (.name) property give function name
//! Only Function provides Prototype Property
function hello() {
  console.log("hello world");
}
console.log(hello.prototype);
hello.prototype.abc = "abc";
hello.prototype.xyz = "xyz";
hello.prototype.sing = function () {
  return "lalalla";
};
console.log(hello.prototype.sing());
console.log(hello.name);

//! By default in Js, when we create function then the function give a prototype.
//Todo,  we can create a relation between __proto__ and protype, by adding our methods to the current function's protype
function createUser2(firstName, lastName, email, age, address) {
  const user33 = Object.create(createUser2.prototype); // {}
  user33.firstName = firstName;
  user33.lastName = lastName;
  user33.email = email;
  user33.age = age;
  user33.address = address;
  return user33;
}
createUser2.prototype.about2 = function () {
  return `${this.firstName} is ${this.age} years old.`;
};
createUser2.prototype.is182 = function () {
  return this.age >= 18;
};
createUser2.prototype.sing2 = function () {
  return "la la la la ";
};
const user17 = createUser2(
  "harshit",
  "vashsith",
  "harshit@gmail.com",
  18,
  "my address"
);
const user18 = createUser2(
  "harsh",
  "vashsith",
  "harshit@gmail.com",
  19,
  "my address"
);
const user19 = createUser2(
  "mohit",
  "vashsitha",
  "harshit@gmail.com",
  17,
  "my address"
);
console.log(user17);
console.log(user17.is182());

//* New Keyword
//? 1) It creates empty object and stored in this keyword
//? 2) In empty object it stored values and after that it return this keyword by default
//? 3) It sets the Object's __proto__ with function's Prototype.

// Constructor function
function CreateUser(firstName, lastName, email, age, address) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.email = email;
  this.age = age;
  this.address = address;
}
CreateUser.prototype.about = function () {
  return `${this.firstName} is ${this.age} years old.`;
};
CreateUser.prototype.is18 = function () {
  return this.age >= 18;
};
CreateUser.prototype.sing = function () {
  return "la la la la ";
};

const user77 = new CreateUser(
  "harshit",
  "vashsith",
  "harshit@gmail.com",
  18,
  "my address"
);
const user88 = new CreateUser(
  "harsh",
  "vashsith",
  "harshit@gmail.com",
  19,
  "my address"
);
const user99 = new CreateUser(
  "mohit",
  "vashsitha",
  "harshit@gmail.com",
  17,
  "my address"
);
console.log(user77);
console.log(user77.is18());

//! if you don't want to print prototype's key, then use hasOwnproperty(key)
for (let key in user77) {
  //Printing All keys
  //console.log(key);
  if (user77.hasOwnProperty(key)) {
    console.log(key);
  }
}

//* GetPrototype of function
let numberr = [1, 2, 3];
console.log(Object.getPrototypeOf(numberr));
function helloo() {
  console.log("hello");
}
console.log(helloo.prototype);

//* In Js, class is fake, by deault internally it works as prototype way
class CreateUser11 {
  constructor(firstName, lastName, email, age, address) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.email = email;
    this.age = age;
    this.address = address;
  }

  about() {
    return `${this.firstName} is ${this.age} years old.`;
  }
  is18() {
    return this.age >= 18;
  }
  sing() {
    return "la la la la ";
  }
}

const user101 = new CreateUser11(
  "harshit",
  "vashsith",
  "harshit@gmail.com",
  18,
  "my address"
);
const user102 = new CreateUser11(
  "harsh",
  "vashsith",
  "harshit@gmail.com",
  19,
  "my address"
);
const user103 = new CreateUser11(
  "mohit",
  "vashsitha",
  "harshit@gmail.com",
  17,
  "my address"
);
//! It's type also same, Object type
console.log(Object.getPrototypeOf(user101));
console.log(user101);

//* Example of class, with extends

class Animal {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  eat() {
    return `${this.name} is eating`;
  }

  isSuperCute() {
    return this.age <= 1;
  }

  isCute() {
    return true;
  }
}
class Dog extends Animal {
  constructor(name, age, speed) {
    super(name, age);
    this.speed = speed;
  }
  //? First it checks that the property is present in that class or not, if present then it takes that, if not then it search that in super class.
  run() {
    return `${this.name} is running at ${this.speed}kmph`;
  }
}
// object and instance are same thing
const tommy = new Dog("tommy", 3, 45);
console.log(tommy.run());

//* Getter And Setter
//? In class, Get word makes methods as a property,so we can use them as property

class Person {
  constructor(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }
  static classInfo() {
    return "this is person class";
  }
  static desc = "static property";
  get fullName() {
    return `${this.firstName} ${this.lastName}`;
  }
  set fullName(fullName) {
    const [firstName, lastName] = fullName.split(" ");
    this.firstName = firstName;
    this.lastName = lastName;
  }
}
const person101 = new Person("harshit", "sharma", 5);
console.log(person101.fullName);
person101.fullName = "mohit vashistha";
console.log(person101.fullName);

//* we can call methods via class, if we make them static , and they are not accessable by objects
const g = Person.classInfo();
console.log(g);
console.log(Person.desc);
