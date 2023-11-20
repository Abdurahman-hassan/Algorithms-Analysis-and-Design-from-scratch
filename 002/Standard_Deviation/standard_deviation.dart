import 'dart:io';
import 'dart:math';

void main() {
  double ave = 0, sd = 0;
  int n = 0;
  double sumSquaredDifferences = 0;
  List<double> x = [];

  // Reading n from the user
  stdout.write("Enter the number of elements: ");
  n = int.parse(stdin.readLineSync() ?? '0');

  // Reading the elements
  for (int i = 0; i < n; i++) {
    stdout.write("Enter the element [${i + 1}]: ");
    double element = double.parse(stdin.readLineSync() ?? '0');
    x.add(element);
    ave += element;
  }

  // Calculating the average
  ave /= n;
  print("Average: $ave");

  // Calculating the standard deviation
  for (int i = 0; i < n; i++) {
    sumSquaredDifferences += pow(x[i] - ave, 2);
  }

  double variance = sumSquaredDifferences / n;
  sd = sqrt(variance);
  print("Standard Deviation is: $sd");
}
