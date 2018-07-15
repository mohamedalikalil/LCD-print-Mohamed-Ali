
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;
sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;
int i;
void main() {
Lcd_Init();
Lcd_cmd(_lcd_cursor_off);
        while(1){
for(i=1;i<=16;i++)
{
lcd_out(1,i,"Mohamed");
lcd_out(2,i,"  Ali  ");
delay_ms(100);
lcd_cmd(_lcd_clear);
}
     while(i>=3)
     {
       lcd_cmd(_lcd_clear);
  lcd_cmd(_LCD_SHIFT_LEFT);
   i=i-1;
   lcd_out(1,i,"Mohamed");
   lcd_out(2,i,"  Ali  ");
   delay_ms(100);
  }
  }
}