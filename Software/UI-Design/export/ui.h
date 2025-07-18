// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.6
// Project name: atom_ui

#ifndef _ATOM_UI_UI_H
#define _ATOM_UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void anim_down_Animation( lv_obj_t *TargetObject, int delay);
void anim_zoom_fade_out_Animation( lv_obj_t *TargetObject, int delay);
void side_bar_spread_Animation( lv_obj_t *TargetObject, int delay);

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_statusBar;
extern lv_obj_t *ui_wifiMode;
extern lv_obj_t *ui_wifiIcon;
extern lv_obj_t *ui_atomLabel;
extern lv_obj_t *ui_batteryIcon;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_timePanel;
extern lv_obj_t *ui_hourMinPanel;
extern lv_obj_t *ui_minRoller2;
extern lv_obj_t *ui_minRoller1;
extern lv_obj_t *ui_Label13;
extern lv_obj_t *ui_hourRoller2;
extern lv_obj_t *ui_hourRoller1;
extern lv_obj_t *ui_Bar2;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Panel1;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_Image2;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Image3;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_Image4;
extern lv_obj_t *ui_Label7;
// CUSTOM VARIABLES

// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_Panel3;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui_Label11;
extern lv_obj_t *ui_Label12;
// CUSTOM VARIABLES

// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
extern lv_obj_t *ui_Screen3;
extern lv_obj_t *ui_Panel6;
extern lv_obj_t *ui_Panel5;
extern lv_obj_t *ui_statusBar1;
extern lv_obj_t *ui_wifiMode1;
extern lv_obj_t *ui_wifiIcon1;
extern lv_obj_t *ui_atomLabel1;
extern lv_obj_t *ui_batteryIcon1;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_timePanel1;
extern lv_obj_t *ui_hourMinPanel1;
extern lv_obj_t *ui_minRoller3;
extern lv_obj_t *ui_minRoller4;
extern lv_obj_t *ui_Label14;
extern lv_obj_t *ui_hourRoller3;
extern lv_obj_t *ui_hourRoller4;
extern lv_obj_t *ui_Bar1;
extern lv_obj_t *ui_Label15;
extern lv_obj_t *ui_Label16;
extern lv_obj_t *ui_Panel2;
extern lv_obj_t *ui_Image5;
extern lv_obj_t *ui_Label17;
extern lv_obj_t *ui_Image6;
extern lv_obj_t *ui_Label18;
extern lv_obj_t *ui_Image7;
extern lv_obj_t *ui_Label19;
extern lv_obj_t *ui_Image8;
extern lv_obj_t *ui_Label20;
extern lv_obj_t *ui_Panel7;
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Image10;
extern lv_obj_t *ui_Image9;
// CUSTOM VARIABLES

// SCREEN: ui_Screen4
void ui_Screen4_screen_init(void);
extern lv_obj_t *ui_Screen4;
extern lv_obj_t *ui_Image11;
extern lv_obj_t *ui_Label21;
// CUSTOM VARIABLES

// SCREEN: ui_Screen5
void ui_Screen5_screen_init(void);
extern lv_obj_t *ui_Screen5;
extern lv_obj_t *ui_statusBar3;
extern lv_obj_t *ui_wifiMode3;
extern lv_obj_t *ui_wifiIcon3;
extern lv_obj_t *ui_atomLabel3;
extern lv_obj_t *ui_batteryIcon3;
extern lv_obj_t *ui_Label23;
extern lv_obj_t *ui_Panel4;
extern lv_obj_t *ui_Label22;
extern lv_obj_t *ui_Container1;
extern lv_obj_t *ui_Spinbox3;
extern lv_obj_t *ui_Label24;
extern lv_obj_t *ui_Container2;
extern lv_obj_t *ui_Spinbox1;
extern lv_obj_t *ui_Label25;
extern lv_obj_t *ui_Container3;
extern lv_obj_t *ui_Spinbox2;
extern lv_obj_t *ui_Label26;
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label27;
extern lv_obj_t *ui_Dropdown2;
extern lv_obj_t *ui_Label28;
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Label29;
// CUSTOM VARIABLES

// SCREEN: ui_Screen6
void ui_Screen6_screen_init(void);
extern lv_obj_t *ui_Screen6;
extern lv_obj_t *ui_statusBar4;
extern lv_obj_t *ui_wifiMode4;
extern lv_obj_t *ui_wifiIcon4;
extern lv_obj_t *ui_atomLabel4;
extern lv_obj_t *ui_batteryIcon4;
extern lv_obj_t *ui_Label31;
extern lv_obj_t *ui_Container4;
extern lv_obj_t *ui_Label30;
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Label32;
extern lv_obj_t *ui_Slider2;
extern lv_obj_t *ui_Button4;
extern lv_obj_t *ui_Label33;
extern lv_obj_t *ui_Button5;
extern lv_obj_t *ui_Label34;
// CUSTOM VARIABLES

// SCREEN: ui_Screen7
void ui_Screen7_screen_init(void);
extern lv_obj_t *ui_Screen7;
extern lv_obj_t *ui_statusBar5;
extern lv_obj_t *ui_wifiMode5;
extern lv_obj_t *ui_wifiIcon5;
extern lv_obj_t *ui_atomLabel5;
extern lv_obj_t *ui_batteryIcon5;
extern lv_obj_t *ui_Label36;
extern lv_obj_t *ui_TabView1;
extern lv_obj_t *ui_TabPage1;
extern lv_obj_t *ui_Label35;
extern lv_obj_t *ui_TabPage2;
extern lv_obj_t *ui_Label37;
// CUSTOM VARIABLES

// EVENTS
extern lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE( ui_img_wifi_closed_png);   // assets/WIFI_CLOSED.png
LV_IMG_DECLARE( ui_img_battery_png);   // assets/BATTERY.png
LV_IMG_DECLARE( ui_img_link_png);   // assets/LINK.png
LV_IMG_DECLARE( ui_img_time_png);   // assets/TIME.png
LV_IMG_DECLARE( ui_img_follows_png);   // assets/FOLLOWS.png
LV_IMG_DECLARE( ui_img_app_png);   // assets/APP.png
LV_IMG_DECLARE( ui_img_serial_png);   // assets/serial.png
LV_IMG_DECLARE( ui_img_update_png);   // assets/update.png

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
