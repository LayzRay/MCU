#ifndef LCD_H
#define LCD_H

void InitLCD(void);
void SetBacklight (int Backlight);
void LCDTextOut (unsigned char * top_line, unsigned char * bottom_line);
int Sleep (int _slp);

#endif
