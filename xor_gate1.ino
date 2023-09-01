void setup ()
{
  pinMode (13, OUTPUT); // Input LED
  pinMode (11, OUTPUT); // Input LED 
  pinMode (0, OUTPUT); // Output LED
  pinMode (8, INPUT); 
  pinMode (9, INPUT) ;
}

void loop ()
{
  int x = digitalRead(9);
  int y = digitalRead(8);
  if (x == HIGH and y == HIGH){ 
  digitalWrite (13, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (0, LOW); // Output LED
  delay(1000);
  }
  else if (x == HIGH and y == LOW){
  digitalWrite (13, HIGH);
  digitalWrite (11, LOW); 
  digitalWrite (0, HIGH);
  }
  else if (x == LOW and y == HIGH){ 
  digitalWrite (13, LOW); 
  digitalWrite (11, HIGH);
  digitalWrite (0, HIGH) ; // Output LED
  }
  else{
  digitalWrite (13, LOW); 
  digitalWrite (11, LOW); // Output LED
  digitalWrite (0, LOW); 
  }
}