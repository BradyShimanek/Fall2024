function sortEvens(numArray) {
    let evenNums = [];

    for (let i = 0; i < numArray.length; i++) {
        if (numArray[i] % 2 === 0) {
            evenNums.push(numArray[i]);
        }
    }
    evenNums.sort((a, b) => a - b);

    return evenNums;

}

console.log("Testing sortEvens()...");
let nums = [4, 2, 9, 1, 8];
let evenNums = sortEvens(nums);
console.log(evenNums);


// Do NOT remove the following line:
export default sortEvens;