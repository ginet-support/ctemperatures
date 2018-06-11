float C2Fahr(float Celsius){
  float Fahrenheit;

  if (Celsius == 0) {
    Fahrenheit = 32;
  }
  else {
    Fahrenheit = (Celsius  / (5.0/9.0)) + 32;
		}
    return Fahrenheit;
}
