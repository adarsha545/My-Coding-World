let basic_salary = 5500;
let dearness_allowance = 74;
let rent_allowance = 15;
let gross = basic_salary + (basic_salary * (dearness_allowance / 100)) + (basic_salary * (rent_allowance / 100))
console.log("Gross salary : ", gross);