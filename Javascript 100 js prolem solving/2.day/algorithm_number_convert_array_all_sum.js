function sum(num1,num2){
	return num1+num2;
}
console.log(sum(1,3));

function totalSum(...num1){
	let total=0;
	num1.forEach(perElm=>{
		total=total+perElm;
	})
	return total;
}

console.log(totalSum(1,3,4,5,6))