function convertLetterToNumber(str) {
  let out = 0,
    len = str.length;
  for (pos = 0; pos < len; pos++) {
    out += (str.charCodeAt(pos) - 64) * Math.pow(26, len - pos - 1);
  }
  return out;
}

console.log(convertLetterToNumber("AC"));

// 0+(26   * (26^2) = 676
// 676+(25 * (26^0) = 701
// 701+(24 * ())
