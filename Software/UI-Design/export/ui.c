// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.6
// Project name: atom_ui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void anim_down_Animation( lv_obj_t *TargetObject, int delay);
void anim_zoom_fade_out_Animation( lv_obj_t *TargetObject, int delay);
void side_bar_spread_Animation( lv_obj_t *TargetObject, int delay);

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_statusBar;
lv_obj_t *ui_wifiMode;
lv_obj_t *ui_wifiIcon;
lv_obj_t *ui_atomLabel;
lv_obj_t *ui_batteryIcon;
lv_obj_t *ui_Label1;
lv_obj_t *ui_timePanel;
lv_obj_t *ui_hourMinPanel;
lv_obj_t *ui_minRoller2;
lv_obj_t *ui_minRoller1;
lv_obj_t *ui_Label13;
lv_obj_t *ui_hourRoller2;
lv_obj_t *ui_hourRoller1;
lv_obj_t *ui_Bar2;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Label7;
// CUSTOM VARIABLES

// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Label12;
// CUSTOM VARIABLES

// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
lv_obj_t *ui_Screen3;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_statusBar1;
lv_obj_t *ui_wifiMode1;
lv_obj_t *ui_wifiIcon1;
lv_obj_t *ui_atomLabel1;
lv_obj_t *ui_batteryIcon1;
lv_obj_t *ui_Label8;
lv_obj_t *ui_timePanel1;
lv_obj_t *ui_hourMinPanel1;
lv_obj_t *ui_minRoller3;
lv_obj_t *ui_minRoller4;
lv_obj_t *ui_Label14;
lv_obj_t *ui_hourRoller3;
lv_obj_t *ui_hourRoller4;
lv_obj_t *ui_Bar1;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label17;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Label18;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Label19;
lv_obj_t *ui_Image8;
lv_obj_t *ui_Label20;
lv_obj_t *ui_Panel7;
lv_obj_t *ui_Button2;
lv_obj_t *ui_Image10;
lv_obj_t *ui_Image9;
// CUSTOM VARIABLES

// SCREEN: ui_Screen4
void ui_Screen4_screen_init(void);
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Image11;
lv_obj_t *ui_Label21;
// CUSTOM VARIABLES

// SCREEN: ui_Screen5
void ui_Screen5_screen_init(void);
lv_obj_t *ui_Screen5;
lv_obj_t *ui_statusBar3;
lv_obj_t *ui_wifiMode3;
lv_obj_t *ui_wifiIcon3;
lv_obj_t *ui_atomLabel3;
lv_obj_t *ui_batteryIcon3;
lv_obj_t *ui_Label23;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_Label22;
lv_obj_t *ui_Container1;
lv_obj_t *ui_Spinbox3;
lv_obj_t *ui_Label24;
lv_obj_t *ui_Container2;
lv_obj_t *ui_Spinbox1;
lv_obj_t *ui_Label25;
lv_obj_t *ui_Container3;
lv_obj_t *ui_Spinbox2;
lv_obj_t *ui_Label26;
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label27;
lv_obj_t *ui_Dropdown2;
lv_obj_t *ui_Label28;
lv_obj_t *ui_Button3;
lv_obj_t *ui_Label29;
// CUSTOM VARIABLES

// SCREEN: ui_Screen6
void ui_Screen6_screen_init(void);
lv_obj_t *ui_Screen6;
lv_obj_t *ui_statusBar4;
lv_obj_t *ui_wifiMode4;
lv_obj_t *ui_wifiIcon4;
lv_obj_t *ui_atomLabel4;
lv_obj_t *ui_batteryIcon4;
lv_obj_t *ui_Label31;
lv_obj_t *ui_Container4;
lv_obj_t *ui_Label30;
lv_obj_t *ui_Slider1;
lv_obj_t *ui_Label32;
lv_obj_t *ui_Slider2;
lv_obj_t *ui_Button4;
lv_obj_t *ui_Label33;
lv_obj_t *ui_Button5;
lv_obj_t *ui_Label34;
// CUSTOM VARIABLES

// SCREEN: ui_Screen7
void ui_Screen7_screen_init(void);
lv_obj_t *ui_Screen7;
lv_obj_t *ui_statusBar5;
lv_obj_t *ui_wifiMode5;
lv_obj_t *ui_wifiIcon5;
lv_obj_t *ui_atomLabel5;
lv_obj_t *ui_batteryIcon5;
lv_obj_t *ui_Label36;
lv_obj_t *ui_TabView1;
lv_obj_t *ui_TabPage1;
lv_obj_t *ui_Label35;
lv_obj_t *ui_TabPage2;
lv_obj_t *ui_Label37;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void anim_down_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 400);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -20, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void anim_zoom_fade_out_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 400);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_width );
lv_anim_set_values(&PropertyAnimation_0, 40, 170 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_start(&PropertyAnimation_0);
ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_1_user_data->target = TargetObject;
PropertyAnimation_1_user_data->val = -1;
lv_anim_t PropertyAnimation_1;
lv_anim_init(&PropertyAnimation_1);
lv_anim_set_time(&PropertyAnimation_1, 200);
lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_1, 0, 255 );
lv_anim_set_path_cb( &PropertyAnimation_1, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_1, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_1, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_1, 0);
lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
lv_anim_set_early_apply( &PropertyAnimation_1, true );
lv_anim_start(&PropertyAnimation_1);

}
void side_bar_spread_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 400);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_width );
lv_anim_set_values(&PropertyAnimation_0, 0, 36 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui_Screen3_screen_init();
ui_Screen4_screen_init();
ui_Screen5_screen_init();
ui_Screen6_screen_init();
ui_Screen7_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
