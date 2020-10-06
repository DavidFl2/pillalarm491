//menu.h

#ifndef HEADER_MENU
#define HEADER_MENU
   
class Menu
{
public:
  // Default Constructor
  Menu();


  // functions

  
  void setLevel(uint16_t newLevel);
  uint16_t getLevel();
  
  void setCount(uint16_t newCount);
  uint16_t getCount();
  void incCount();

  bool getClkON();
  void setClkON(bool state);

  void setVisability(bool state);

  void setPIN(String newPIN);
  String getPIN();

  void setColor(uint16_t newColor);
  uint16_t getColor();

  void setSSID(String input);
  String getSSID();
  void setPASS(String input);
  String getPASS();

  void setTimeFormat(uint16_t newFormat);
  uint16_t getTimeFormat();

  void setChildSafety(bool newState);
  bool getChildSafety();
  
private:
  // data
  uint16_t count;
  uint16_t menuLevel; // 0:main, 1:SUB MENU , 10:Time, 20:Pill Alarm, 30:Alarm, 40:Child Safety, 50:PIN, 60:WiFi, 70:Colors
                      // 24 hour time menu    15:Time, 25:Pill Alarm, 35:Alarm
  bool clkON; //when true display time, when false disable to allow for menus
  uint16_t menuColor;
  String PIN; //stringg to allow leading zeros in the pin
  String wifiSSID;
  String wifiPASS;
  uint16_t timeFormat;
  bool childSafety;
  
  uint16_t hourIn;
  uint16_t minIn;
  uint16_t ampmIn; //0:not set 1:AM 2:PM
  bool isDisplayVisible = false; // assume the display is off until configured in setup()
  
//Need a way to save the password, and other settings when power is lost, possibly by saving to a file and reading from a file when creating the instance of Menu clkMenu
};   
#endif
