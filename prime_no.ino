

void setup()
{
  Serial.begin(9600);
  Serial.println("enter a number");

}
void loop()
{
int n, i, flag = 0;

  n = Serial.parseInt();
  if (Serial.available() > 0)
  {

    for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
      {
        flag = 1;
       
      }

    }
    if (n == 1)
    {
      Serial.println("1 is neither prime or composite");
      Serial.println(n);
    }
    else
    {
      if (flag == 0)
      {
        Serial.println(" prime");
        Serial.println(n);
      }
      else
      {
        Serial.println("  not prime");
        Serial.println(n);
      }
      
    }
    delay(1000);
  }
}
