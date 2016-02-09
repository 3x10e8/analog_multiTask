void setup3()
{
  Serial.begin(115200);
}

void loop3()
{
    Serial.print(time);
    Serial.print(' ');
    Serial.println(val);
    delay(2);
}
