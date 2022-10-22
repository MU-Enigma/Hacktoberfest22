//function to add 2 numbers
function addition() {
    var num1 = parseInt(document.getElementById('num1').value);
    var num2 = parseInt(document.getElementById('num2').value);

    var answer = num1 + num2;
    document.getElementById('result').innerHTML = answer.toString();
}

//function to substract 2 numbers
function subtraction() {
    var num1 = parseInt(document.getElementById('num1').value);
    var num2 = parseInt(document.getElementById('num2').value);

    var answer = num1 - num2;
    document.getElementById('result').innerHTML = answer.toString();
}

//function to multiply 2 numbers
function multiplication() {
    var num1 = parseInt(document.getElementById('num1').value);
    var num2 = parseInt(document.getElementById('num2').value);

    var answer = num1 * num2;
    document.getElementById('result').innerHTML = answer.toString();
}

//function to divide 2 numbers
function division() {
    var num1 = parseInt(document.getElementById('num1').value);
    var num2 = parseInt(document.getElementById('num2').value);

    var answer = num1 / num2;
    document.getElementById('result').innerHTML = answer.toString();
}