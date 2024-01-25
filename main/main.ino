int _ABVAR_1_ROT;
int _ABVAR_2_GRUN;
int _ABVAR_3_BLAU;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  _ABVAR_3_BLAU = 0;
  _ABVAR_1_ROT = 0;
pinMode( 5 , OUTPUT);
pinMode( 6 , OUTPUT);
_ABVAR_2_GRUN = 0;
pinMode( 4 , OUTPUT);
}
void loop()
{
  digitalWrite( 4 , HIGH );
digitalWrite( 5 , LOW );
 digitalWrite( 6 , LOW );
digitalWrite( 7 , LOW );
_ABVAR_1_ROT = pulseIn (8, LOW) ;
Serial.print( "Rot" );
Serial.print( _ABVAR_1_ROT );
Serial.print("     ");
delay( 100 );
digitalWrite( 6 , HIGH );
digitalWrite( 7 , HIGH );
_ABVAR_2_GRUN = pulseIn (8, LOW);
Serial.print( "Grun" );
Serial.print( _ABVAR_2_GRUN );
Serial.print("     ");
delay( 100 );
digitalWrite( 6 , LOW );
digitalWrite( 7 , HIGH );
_ABVAR_3_BLAU = pulseIn (8, LOW) ;
Serial.print( "Blau" );
Serial.print( _ABVAR_3_BLAU );
Serial.println("");
delay( 100 );

if (_ABVAR_1_ROT >= 23)
{ if (_ABVAR_2_GRUN >= 52) 
 { if (_ABVAR_3_BLAU >= 34) {
  digitalWrite(13, HIGH);
 }}}
 
 delay(1000);
 digitalWrite(13, LOW);

}
