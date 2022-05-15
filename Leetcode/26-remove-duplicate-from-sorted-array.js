var removeDuplicates = function (nums) {
  if (nums.length == 0) return 0;
  var p1 = 0;
  nums.map((num, index) => {
    if (num !== nums[p1]) {
      p1++;
      console.log(`p[${index}]`, p1);
      nums[p1] = num;
    }
  });
  return p1 + 1;
};

console.log(removeDuplicates([1, 1, 2, 3, 4, 4]));
// p1 = 0 [1, 1, 2, 3, 4, 4]
// p1 = 0 [1, 1, 2, 3, 4, 4]
// p1 = 1 [1, 2, 2, 3, 4, 4]
// p1 = 2 [1, 2, 3, 3, 4, 4]
// p1 = 3 [1, 2, 3, 4, 4, 4]
// true
