#define F (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

int convertIntToFixedPoint(int n) {
  return n * F;
}

int convertFixedPointToInt(int x) {
  return x / F;
}

int convertFixedPointToIntRound(int x) {
  if (x >= 0) return (x + F / 2) / F;
  else return (x - F / 2) / F;
}

int addFixedPoints(int x, int y) {
  return x + y;
}

int subtractFixedPoints(int x, int y) {
  return x - y;
}

int addIntToFixedPoint(int x, int n) {
  return x + n * F;
}

int subtractIntFromFixedPoint(int x, int n) {
  return x - n * F;
}

int multiplyFixedPoints(int x, int y) {
  return ((int64_t) x) * y / F;
}

int multiplyFixedPointByInt(int x, int n) {
  return x * n;
}

int divideFixedPoints(int x, int y) {
  return ((int64_t) x) * F / y;
}

int divideFixedPointByInt(int x, int n) {
  return x / n;
}

