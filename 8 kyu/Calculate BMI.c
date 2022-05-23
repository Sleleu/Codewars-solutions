/*
                    DESCRIPTION

Write function bmi that calculates body mass index (bmi = weight / height2).

if bmi <= 18.5 return "Underweight"

if bmi <= 25.0 return "Normal"

if bmi <= 30.0 return "Overweight"

if bmi > 30 return "Obese"
*/

const char *bmi (int weight, double height)
{
  double bmi = weight / (height * height);
  
  if (bmi <= 0 || weight <= 0 || height <= 0)
    return ("Error");
  
  if (bmi <= 18.5)
    return ("Underweight");
  else if (bmi <= 25.0)
    return ("Normal");
  else if (bmi <= 30.0)
    return ("Overweight");
  else
    return ("Obese");
}