trapezoid_area(a, b, h)
{
  // if we need to typecate the result to int
  // return ((a + b) * h / 2).toInt();
  // or return (a + b) * h ~/ 2;
  return (a + b) * h / 2;
}


main() {
  print(trapezoid_area(2, 4, 2));
}