const isPalindrome = function (s) {
  const replaced = s.replace(/[^a-z0-9]/gi, "");
  const phrase = replaced.toLowerCase();
  const array1 = [...phrase];
  const array2 = [...array1].reverse();
  const isPalindrome =
    array1.length === array2.length &&
    array1.every((value, index) => value === array2[index]);
  return isPalindrome;
};

const checkPalindrome = isPalindrome("A man, a plan, a canal: Panama");
console.log(checkPalindrome);
