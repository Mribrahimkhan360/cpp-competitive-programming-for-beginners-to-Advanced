function sequence(inputarray) {
	for (let i = 1; i<inputarray.length; i++) {
		if (inputarray[i]<inputarray[i-1]) {
			return false;
		}
	}
	return true;
}
console.log(sequence([1, 2, 3, 4])); // true
console.log(sequence([1, 5, 3, 4])); // true

