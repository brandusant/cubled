//Dispunere straturi de sus in jos

//A0
//A1
//A2
//A3

//dispunere coloane pe straturi

// 3  2  1  0
// 7  6  5  4
//11 10  9  8
//15 14 13 12


//schema conectare la Arduino
  int layer[4]={A3,A2,A1,A0}; //declarare straturi
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4}; //declarare coloane

  
void setup()
{
  Serial.begin(9600);
   for(int i = 0; i<16; i++)   
  {
    pinMode(column[i], OUTPUT);
  }
   for(int i = 0; i<4; i++)
  {
    pinMode(layer[i], OUTPUT); 
  }


  Serial.println("1 - Deschidere cub");
  Serial.println("2 - Parcurgere straturi sus-jos");
  Serial.println("3 - Parcurgere straturi jos-sus");
  Serial.println("4 - Parcurgere straturi pare");
  Serial.println("5 - Parcurgere straturi impare");
  Serial.println("6 - Parcurgere spirala 1");
  Serial.println("7 - Parcurgere spirala 2");
  Serial.println("8 - Parcurgere diagonala 1");
  Serial.println("9 - Parcurgere diagonala 2");
  Serial.println("0 - Inchidere cub");

 
 
}

//inchidere led-uri
void cub_inchidere()
 {
   for(int i = 0; i<16; i++)
   {
     digitalWrite(column[i], 0);
   }
   for(int i = 0; i<4; i++)
   {
     digitalWrite(layer[i], 0);
   }
 }
 
//deschidere led-uri
void cub_deschidere()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }

  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}

void parcurgere_straturi_sus_jos()
{
 for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
    delay(1000);
    digitalWrite(layer[i], 0);
        delay(1000);
  }
}

void parcurgere_straturi_jos_sus()
{
 for(int i = 4; i>0; i--)
  {
    digitalWrite(layer[i], 1);
    delay(1000);
    digitalWrite(layer[i], 0);
        delay(1000);
  }
}

void parcurgere_straturi_pare()
{

   digitalWrite(layer[0], 1);
    delay(1000);
    digitalWrite(layer[0], 0);
    delay(1000);

 digitalWrite(layer[2], 1);
    delay(1000);
    digitalWrite(layer[2], 0);
    delay(1000);
    
    }
   
void parcurgere_straturi_impare()
{

   digitalWrite(layer[1], 1);
    delay(1000);
    digitalWrite(layer[1], 0);
    delay(1000);

 digitalWrite(layer[3], 1);
    delay(1000);
    digitalWrite(layer[3], 0);
    delay(1000);
    
    }

void parcurgere_spirala_1()
{

for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
//ordine parcurgere: 0, 1, 2, 3 7, 11, 15, 14, 13, 12, 8, 4, 5, 6, 10, 9  
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[0], 1);
    delay(1000);
    digitalWrite(column[1], 1);
    delay(1000);
    digitalWrite(column[2], 1);
    delay(1000);
    digitalWrite(column[3], 1);
    delay(1000);
    digitalWrite(column[7], 1);
    delay(1000);
    digitalWrite(column[11], 1);
    delay(1000);
    digitalWrite(column[15], 1);
    delay(1000);
    digitalWrite(column[14], 1);
    delay(1000);
    digitalWrite(column[13], 1);
    delay(1000);
    digitalWrite(column[12], 1);
    delay(1000);
    digitalWrite(column[8], 1);
    delay(1000);
    digitalWrite(column[4], 1);
    delay(1000);
    digitalWrite(column[5], 1);
    delay(1000);
    digitalWrite(column[6], 1);
    delay(1000);
    digitalWrite(column[10], 1);
    delay(1000);
    digitalWrite(column[9], 1);
    delay(1000);
  }
}


void parcurgere_spirala_2()
{
for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
//ordine parcurgere> 0, 4, 8, 12, 13, 14, 15, 11, 7, 3, 2, 1, 5, 9, 10, 6  
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[0], 1);
    delay(1000);
    digitalWrite(column[4], 1);
    delay(1000);
    digitalWrite(column[8], 1);
    delay(1000);
    digitalWrite(column[12], 1);
    delay(1000);
    digitalWrite(column[13], 1);
    delay(1000);
    digitalWrite(column[14], 1);
    delay(1000);
    digitalWrite(column[15], 1);
    delay(1000);
    digitalWrite(column[11], 1);
    delay(1000);
    digitalWrite(column[7], 1);
    delay(1000);
    digitalWrite(column[3], 1);
    delay(1000);
    digitalWrite(column[2], 1);
    delay(1000);
    digitalWrite(column[1], 1);
    delay(1000);
    digitalWrite(column[5], 1);
    delay(1000);
    digitalWrite(column[9], 1);
    delay(1000);
    digitalWrite(column[10], 1);
    delay(1000);
    digitalWrite(column[6], 1);
    delay(1000);
  }
}


 void parcurgere_diagonala_1()
{
for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
//ordine parcurgere: 3, 7, 2, 11, 6, 1, 15, 10, 5, 0, 14, 9, 4, 13, 8, 12
  
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[3], 1);
    delay(1000);
    digitalWrite(column[7], 1);
    delay(1000);
    digitalWrite(column[2], 1);
    delay(1000);
    digitalWrite(column[11], 1);
    delay(1000);
    digitalWrite(column[6], 1);
    delay(1000);
    digitalWrite(column[1], 1);
    delay(1000);
    digitalWrite(column[15], 1);
    delay(1000);
    digitalWrite(column[10], 1);
    delay(1000);
    digitalWrite(column[5], 1);
    delay(1000);
    digitalWrite(column[0], 1);
    delay(1000);
    digitalWrite(column[14], 1);
    delay(1000);
    digitalWrite(column[9], 1);
    delay(2000);
    digitalWrite(column[4], 1);
    delay(1000);
    digitalWrite(column[13], 1);
    delay(1000);
    digitalWrite(column[8], 1);
    delay(1000);
    digitalWrite(column[12], 1);
    delay(1000);
  }
}


 void parcurgere_diagonala_2()
{
for(int i = 0; i<16; i++)
  {
    digitalWrite(column[i], 0);
  }
  for(int i = 0; i<4; i++)
  {
    digitalWrite(layer[i], 1);
  }
//ordine parcurgere> 0, 4, 1, 8, 5, 2, 12, 9, 6, 2, 13, 10, 7, 14, 11, 15  
  for(int i = 0; i<16; i++)
  {
    digitalWrite(column[0], 1);
    delay(1000);
    digitalWrite(column[4], 1);
    delay(1000);
    digitalWrite(column[1], 1);
    delay(1000);
    digitalWrite(column[8], 1);
    delay(1000);
    digitalWrite(column[5], 1);
    delay(1000);
    digitalWrite(column[2], 1);
    delay(1000);
    digitalWrite(column[12], 1);
    delay(1000);
    digitalWrite(column[9], 1);
    delay(1000);
    digitalWrite(column[6], 1);
    delay(1000);
    digitalWrite(column[3], 1);
    delay(1000);
    digitalWrite(column[13], 1);
    delay(1000);
    digitalWrite(column[10], 1);
    delay(1000);
    digitalWrite(column[7], 1);
    delay(1000);
    digitalWrite(column[14], 1);
    delay(1000);
    digitalWrite(column[11], 1);
    delay(1000);
    digitalWrite(column[15], 1);
    delay(1000);
  }
}


 void loop()
{
  
  if(Serial.available()>0)
   {     
      char data= Serial.read(); 
      switch(data)
      {
        case '1':cub_deschidere(); delay(1000);break; 

        case '2': parcurgere_straturi_sus_jos(); delay(1000);break; 
        case '3': parcurgere_straturi_jos_sus(); delay(1000);break; 

        case '4': parcurgere_straturi_pare(); delay(1000);break; 
        case '5': parcurgere_straturi_impare(); delay(1000);break; 

        case '6': parcurgere_spirala_1();delay(1000);break; 
        case '7': parcurgere_spirala_2();delay(1000);break; 

        case '8': parcurgere_diagonala_1();delay(1000);break; 
        case '9': parcurgere_diagonala_2();delay(1000);break; 
        case '0': cub_inchidere();break;
       default : 
       
cub_deschidere();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_sus_jos();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_jos_sus();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_pare();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_impare();delay(1000);cub_inchidere();delay(1000);
parcurgere_spirala_1();delay(1000);cub_inchidere();delay(1000);
parcurgere_spirala_2();delay(1000);cub_inchidere();delay(1000);
parcurgere_diagonala_1();delay(1000);cub_inchidere();delay(1000);
parcurgere_diagonala_2();delay(1000); cub_inchidere();delay(1000);
       break;
      }
    Serial.println(data);
   }
   else
   {
cub_deschidere();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_sus_jos();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_jos_sus();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_pare();delay(1000);cub_inchidere();delay(1000);
parcurgere_straturi_impare();delay(1000);cub_inchidere();delay(1000);
parcurgere_spirala_1();delay(1000);cub_inchidere();delay(1000);
parcurgere_spirala_2();delay(1000);cub_inchidere();delay(1000);
parcurgere_diagonala_1();delay(1000);cub_inchidere();delay(1000);
parcurgere_diagonala_2();delay(1000); cub_inchidere();delay(1000);
   }


}



