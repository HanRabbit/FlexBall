// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.6
// Project name: atom_ui

#include "../ui.h"

void ui_Screen7_screen_init(void)
{
ui_Screen7 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_statusBar5 = lv_obj_create(ui_Screen7);
lv_obj_set_width( ui_statusBar5, 320);
lv_obj_set_height( ui_statusBar5, 18);
lv_obj_set_x( ui_statusBar5, 0 );
lv_obj_set_y( ui_statusBar5, 2 );
lv_obj_set_align( ui_statusBar5, LV_ALIGN_TOP_MID );
lv_obj_clear_flag( ui_statusBar5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_statusBar5, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_statusBar5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_statusBar5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_statusBar5, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_wifiMode5 = lv_label_create(ui_statusBar5);
lv_obj_set_width( ui_wifiMode5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_wifiMode5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_wifiMode5, 20 );
lv_obj_set_y( ui_wifiMode5, 0 );
lv_obj_set_align( ui_wifiMode5, LV_ALIGN_LEFT_MID );
lv_label_set_text(ui_wifiMode5,"STA");
lv_obj_set_style_text_font(ui_wifiMode5, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_wifiIcon5 = lv_img_create(ui_statusBar5);
lv_img_set_src(ui_wifiIcon5, &ui_img_wifi_closed_png);
lv_obj_set_width( ui_wifiIcon5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_wifiIcon5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_wifiIcon5, LV_ALIGN_LEFT_MID );
lv_obj_add_flag( ui_wifiIcon5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_wifiIcon5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_atomLabel5 = lv_label_create(ui_statusBar5);
lv_obj_set_width( ui_atomLabel5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_atomLabel5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_atomLabel5, LV_ALIGN_CENTER );
lv_label_set_text(ui_atomLabel5,"WiFi");
lv_obj_set_style_text_font(ui_atomLabel5, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_batteryIcon5 = lv_img_create(ui_statusBar5);
lv_img_set_src(ui_batteryIcon5, &ui_img_battery_png);
lv_obj_set_width( ui_batteryIcon5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_batteryIcon5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_batteryIcon5, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_batteryIcon5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_batteryIcon5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label36 = lv_label_create(ui_statusBar5);
lv_obj_set_width( ui_Label36, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label36, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label36, -20 );
lv_obj_set_y( ui_Label36, 0 );
lv_obj_set_align( ui_Label36, LV_ALIGN_RIGHT_MID );
lv_label_set_text(ui_Label36,"92%");
lv_obj_set_style_text_font(ui_Label36, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TabView1 = lv_tabview_create(ui_Screen7, LV_DIR_BOTTOM, 30);
lv_obj_set_width( ui_TabView1, 320);
lv_obj_set_height( ui_TabView1, 212);
lv_obj_set_x( ui_TabView1, 0 );
lv_obj_set_y( ui_TabView1, 14 );
lv_obj_set_align( ui_TabView1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_TabView1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_TabPage1 = lv_tabview_add_tab(ui_TabView1, "WiFi Info");

ui_Label35 = lv_label_create(ui_TabPage1);
lv_obj_set_width( ui_Label35, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label35, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label35, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label35,"WiFi Info");

ui_TabPage2 = lv_tabview_add_tab(ui_TabView1, "WiFi Config");

ui_Label37 = lv_label_create(ui_TabPage2);
lv_obj_set_width( ui_Label37, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label37, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label37, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label37,"WiFi Config");

}
