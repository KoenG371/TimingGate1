// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Timinggate_test

#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdlib.h>
#include <unistd.h>
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "lvgl/lvgl.h"
#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_background;
lv_obj_t * ui_backgroundcolor2;
lv_obj_t * ui_backgroundcolor;
lv_obj_t * ui_startbutton;
lv_obj_t * ui_Label1;
lv_obj_t * ui_offbutton;
lv_obj_t * ui_menubutton;
lv_obj_t * ui_lastruntotal;
lv_obj_t * ui_lastrunsector1;
lv_obj_t * ui_lastrunsector2;
lv_obj_t * ui_lastrunsector3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label15;
lv_obj_t * ui_t1sector1;
lv_obj_t * ui_t1sector2;
lv_obj_t * ui_t1sector3;
lv_obj_t * ui_t2sector3;
lv_obj_t * ui_t2sector2;
lv_obj_t * ui_t2sector1;
lv_obj_t * ui_t3sector1;
lv_obj_t * ui_t3sector2;
lv_obj_t * ui_t3sector3;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Label26;
lv_obj_t * ui_t1total;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Label29;
lv_obj_t * ui_t2total;
lv_obj_t * ui_t3total;
lv_obj_t * ui_showhistory;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Screen3;
lv_obj_t * ui_backgroundscreen3;
lv_obj_t * ui_Label35;
lv_obj_t * ui_Label36;
lv_obj_t * ui_Menu4;
lv_obj_t * ui_Label37;
lv_obj_t * ui_Label38;

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/
  lv_init();
  /*Initialize the HAL (display, input devices, tick) for LVGL*/
  hal_init();

  demo_reTerminal_UI();

  while(1) {
      /* Periodically call the lv_task handler.
       * It could be done in a timer interrupt or an OS task too.*/
      lv_timer_handler();
      usleep(5 * 1000);
  }

  return 0;
}


///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_backgroundcolor2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        Start_button(e);
    }
}
static void ui_event_backgroundcolor(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        Start_button(e);
    }
}
static void ui_event_startbutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        drop_gate(e);
    }
}
static void ui_event_offbutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_menubutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_t2sector2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_showhistory(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_backgroundscreen3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        Start_button(e);
    }
}
static void ui_event_Menu4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 128);
    lv_obj_set_y(ui_Label2, -140);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "...");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_background

    ui_background = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_background, 480);
    lv_obj_set_height(ui_background, 320);

    lv_obj_set_x(ui_background, 0);
    lv_obj_set_y(ui_background, 0);

    lv_obj_set_align(ui_background, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_background, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_background, lv_color_hex(0xF8F8F8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_background, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_backgroundcolor2

    ui_backgroundcolor2 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_backgroundcolor2, 185);
    lv_obj_set_height(ui_backgroundcolor2, 304);

    lv_obj_set_x(ui_backgroundcolor2, 25);
    lv_obj_set_y(ui_backgroundcolor2, -1);

    lv_obj_set_align(ui_backgroundcolor2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_backgroundcolor2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_backgroundcolor2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_backgroundcolor2, ui_event_backgroundcolor2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_backgroundcolor2, lv_color_hex(0xF8F8F8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backgroundcolor2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_backgroundcolor2, lv_color_hex(0x939393), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_backgroundcolor2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_backgroundcolor2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_backgroundcolor

    ui_backgroundcolor = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_backgroundcolor, 155);
    lv_obj_set_height(ui_backgroundcolor, 304);

    lv_obj_set_x(ui_backgroundcolor, -155);
    lv_obj_set_y(ui_backgroundcolor, -1);

    lv_obj_set_align(ui_backgroundcolor, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_backgroundcolor, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_backgroundcolor, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_backgroundcolor, ui_event_backgroundcolor, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_backgroundcolor, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backgroundcolor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_startbutton

    ui_startbutton = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_startbutton, 100);
    lv_obj_set_height(ui_startbutton, 256);

    lv_obj_set_x(ui_startbutton, 177);
    lv_obj_set_y(ui_startbutton, 19);

    lv_obj_set_align(ui_startbutton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_startbutton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_startbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_startbutton, ui_event_startbutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_startbutton, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 177);
    lv_obj_set_y(ui_Label1, 10);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "GATE-\nDROP");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_offbutton

    ui_offbutton = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_offbutton, 46);
    lv_obj_set_height(ui_offbutton, 26);

    lv_obj_set_x(ui_offbutton, 203);
    lv_obj_set_y(ui_offbutton, -138);

    lv_obj_set_align(ui_offbutton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_offbutton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_offbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_offbutton, ui_event_offbutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_offbutton, lv_color_hex(0x989898), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_offbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_menubutton

    ui_menubutton = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_menubutton, 46);
    lv_obj_set_height(ui_menubutton, 26);

    lv_obj_set_x(ui_menubutton, 151);
    lv_obj_set_y(ui_menubutton, -138);

    lv_obj_set_align(ui_menubutton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_menubutton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_menubutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_menubutton, ui_event_menubutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_menubutton, lv_color_hex(0x989898), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menubutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lastruntotal

    ui_lastruntotal = lv_textarea_create(ui_Screen1);

    lv_obj_set_width(ui_lastruntotal, 136);
    lv_obj_set_height(ui_lastruntotal, 70);

    lv_obj_set_y(ui_lastruntotal, -96);
    lv_obj_set_x(ui_lastruntotal, lv_pct(-33));

    lv_obj_set_align(ui_lastruntotal, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_lastruntotal, NULL);
    else lv_textarea_set_accepted_chars(ui_lastruntotal, "");

    lv_textarea_set_text(ui_lastruntotal, "4.35");
    lv_textarea_set_placeholder_text(ui_lastruntotal, "Placeholder...");

    lv_obj_set_style_text_color(ui_lastruntotal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lastruntotal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lastruntotal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_lastruntotal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lastruntotal, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lastruntotal, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lastruntotal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_lastruntotal, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lastrunsector1

    ui_lastrunsector1 = lv_textarea_create(ui_Screen1);

    lv_obj_set_width(ui_lastrunsector1, 73);
    lv_obj_set_height(ui_lastrunsector1, 58);

    lv_obj_set_y(ui_lastrunsector1, -39);
    lv_obj_set_x(ui_lastrunsector1, lv_pct(-40));

    lv_obj_set_align(ui_lastrunsector1, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_lastrunsector1, NULL);
    else lv_textarea_set_accepted_chars(ui_lastrunsector1, "");

    lv_textarea_set_text(ui_lastrunsector1, "1.18");
    lv_textarea_set_placeholder_text(ui_lastrunsector1, "Placeholder...");

    lv_obj_set_style_text_color(ui_lastrunsector1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lastrunsector1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lastrunsector1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_lastrunsector1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lastrunsector1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lastrunsector1, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lastrunsector1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_lastrunsector1, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lastrunsector2

    ui_lastrunsector2 = lv_textarea_create(ui_Screen1);

    lv_obj_set_width(ui_lastrunsector2, 81);
    lv_obj_set_height(ui_lastrunsector2, 58);

    lv_obj_set_y(ui_lastrunsector2, 23);
    lv_obj_set_x(ui_lastrunsector2, lv_pct(-40));

    lv_obj_set_align(ui_lastrunsector2, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_lastrunsector2, NULL);
    else lv_textarea_set_accepted_chars(ui_lastrunsector2, "");

    lv_textarea_set_text(ui_lastrunsector2, "2.01");
    lv_textarea_set_placeholder_text(ui_lastrunsector2, "Placeholder...");

    lv_obj_set_style_text_color(ui_lastrunsector2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lastrunsector2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lastrunsector2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_lastrunsector2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lastrunsector2, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lastrunsector2, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lastrunsector2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_lastrunsector2, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lastrunsector3

    ui_lastrunsector3 = lv_textarea_create(ui_Screen1);

    lv_obj_set_width(ui_lastrunsector3, 81);
    lv_obj_set_height(ui_lastrunsector3, 58);

    lv_obj_set_y(ui_lastrunsector3, 90);
    lv_obj_set_x(ui_lastrunsector3, lv_pct(-40));

    lv_obj_set_align(ui_lastrunsector3, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_lastrunsector3, NULL);
    else lv_textarea_set_accepted_chars(ui_lastrunsector3, "");

    lv_textarea_set_text(ui_lastrunsector3, "1.16");
    lv_textarea_set_placeholder_text(ui_lastrunsector3, "Placeholder...");

    lv_obj_set_style_text_color(ui_lastrunsector3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lastrunsector3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lastrunsector3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_lastrunsector3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lastrunsector3, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lastrunsector3, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lastrunsector3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_lastrunsector3, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, -177);
    lv_obj_set_y(ui_Label3, -127);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Last Run");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, -185);
    lv_obj_set_y(ui_Label4, 114);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "Sector 3");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, -185);
    lv_obj_set_y(ui_Label5, 47);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "Sector 2");

    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label6

    ui_Label6 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, -185);
    lv_obj_set_y(ui_Label6, -15);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "Sector 1");

    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, -33);
    lv_obj_set_y(ui_Label7, -66);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "Sector 1");

    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 23);
    lv_obj_set_y(ui_Label8, -66);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "Sector 2");

    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 75);
    lv_obj_set_y(ui_Label9, -66);

    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label9, "Sector 3");

    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, -33);
    lv_obj_set_y(ui_Label10, 1);

    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label10, "Sector 1");

    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, 23);
    lv_obj_set_y(ui_Label11, 0);

    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label11, "Sector 2");

    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 75);
    lv_obj_set_y(ui_Label12, 0);

    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label12, "Sector 3");

    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, -33);
    lv_obj_set_y(ui_Label13, 80);

    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label13, "Sector 1");

    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 23);
    lv_obj_set_y(ui_Label14, 80);

    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label14, "Sector 2");

    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label15

    ui_Label15 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label15, 75);
    lv_obj_set_y(ui_Label15, 80);

    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label15, "Sector 3");

    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t1sector1

    ui_t1sector1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t1sector1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t1sector1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t1sector1, -39);
    lv_obj_set_y(ui_t1sector1, -80);

    lv_obj_set_align(ui_t1sector1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t1sector1, "1.18");

    lv_obj_set_style_text_color(ui_t1sector1, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t1sector1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t1sector1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t1sector2

    ui_t1sector2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t1sector2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t1sector2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t1sector2, 18);
    lv_obj_set_y(ui_t1sector2, -80);

    lv_obj_set_align(ui_t1sector2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t1sector2, "2.01");

    lv_obj_set_style_text_color(ui_t1sector2, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t1sector2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t1sector2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t1sector3

    ui_t1sector3 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t1sector3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t1sector3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t1sector3, 70);
    lv_obj_set_y(ui_t1sector3, -80);

    lv_obj_set_align(ui_t1sector3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t1sector3, "1.16");

    lv_obj_set_style_text_color(ui_t1sector3, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t1sector3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t1sector3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t2sector3

    ui_t2sector3 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t2sector3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t2sector3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t2sector3, 70);
    lv_obj_set_y(ui_t2sector3, -15);

    lv_obj_set_align(ui_t2sector3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t2sector3, "1.16");

    lv_obj_set_style_text_color(ui_t2sector3, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t2sector3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t2sector3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t2sector2

    ui_t2sector2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t2sector2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t2sector2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t2sector2, 18);
    lv_obj_set_y(ui_t2sector2, -15);

    lv_obj_set_align(ui_t2sector2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t2sector2, "2.01");

    lv_obj_add_event_cb(ui_t2sector2, ui_event_t2sector2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_t2sector2, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t2sector2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t2sector2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t2sector1

    ui_t2sector1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t2sector1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t2sector1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t2sector1, -39);
    lv_obj_set_y(ui_t2sector1, -15);

    lv_obj_set_align(ui_t2sector1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t2sector1, "1.18");

    lv_obj_set_style_text_color(ui_t2sector1, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t2sector1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t2sector1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t3sector1

    ui_t3sector1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t3sector1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t3sector1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t3sector1, -39);
    lv_obj_set_y(ui_t3sector1, 67);

    lv_obj_set_align(ui_t3sector1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t3sector1, "1.18");

    lv_obj_set_style_text_color(ui_t3sector1, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t3sector1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t3sector1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t3sector2

    ui_t3sector2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t3sector2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t3sector2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t3sector2, 18);
    lv_obj_set_y(ui_t3sector2, 67);

    lv_obj_set_align(ui_t3sector2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t3sector2, "2.01");

    lv_obj_set_style_text_color(ui_t3sector2, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t3sector2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t3sector2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t3sector3

    ui_t3sector3 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t3sector3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t3sector3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t3sector3, 70);
    lv_obj_set_y(ui_t3sector3, 67);

    lv_obj_set_align(ui_t3sector3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t3sector3, "1.16");

    lv_obj_set_style_text_color(ui_t3sector3, lv_color_hex(0xB5B5B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t3sector3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t3sector3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label25

    ui_Label25 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label25, -33);
    lv_obj_set_y(ui_Label25, -131);

    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label25, "HISTORY");

    lv_obj_set_style_text_color(ui_Label25, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label26

    ui_Label26 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label26, -41);
    lv_obj_set_y(ui_Label26, -107);

    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label26, "1");

    lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label26, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label26, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t1total

    ui_t1total = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t1total, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t1total, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t1total, -13);
    lv_obj_set_y(ui_t1total, -108);

    lv_obj_set_align(ui_t1total, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t1total, "4.35");

    lv_obj_set_style_text_color(ui_t1total, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t1total, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t1total, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label28

    ui_Label28 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label28, -42);
    lv_obj_set_y(ui_Label28, -40);

    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label28, "2");

    lv_obj_set_style_text_color(ui_Label28, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label28, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label29

    ui_Label29 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label29, -41);
    lv_obj_set_y(ui_Label29, 36);

    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label29, "3");

    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t2total

    ui_t2total = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t2total, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t2total, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t2total, -13);
    lv_obj_set_y(ui_t2total, -43);

    lv_obj_set_align(ui_t2total, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t2total, "4.35");

    lv_obj_set_style_text_color(ui_t2total, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t2total, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t2total, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_t3total

    ui_t3total = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_t3total, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_t3total, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_t3total, -13);
    lv_obj_set_y(ui_t3total, 35);

    lv_obj_set_align(ui_t3total, LV_ALIGN_CENTER);

    lv_label_set_text(ui_t3total, "4.35");

    lv_obj_set_style_text_color(ui_t3total, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_t3total, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_t3total, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_showhistory

    ui_showhistory = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_showhistory, 87);
    lv_obj_set_height(ui_showhistory, 26);

    lv_obj_set_x(ui_showhistory, -11);
    lv_obj_set_y(ui_showhistory, 130);

    lv_obj_set_align(ui_showhistory, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_showhistory, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_showhistory, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_showhistory, ui_event_showhistory, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_showhistory, lv_color_hex(0x989898), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_showhistory, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label32

    ui_Label32 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label32, -14);
    lv_obj_set_y(ui_Label32, 131);

    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label32, "MORE");

    lv_obj_set_style_text_color(ui_Label32, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label32, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label33

    ui_Label33 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label33, 150);
    lv_obj_set_y(ui_Label33, -136);

    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label33, "...");

    lv_obj_set_style_text_color(ui_Label33, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label33, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label34

    ui_Label34 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label34, 203);
    lv_obj_set_y(ui_Label34, -136);

    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label34, "OFF");

    lv_obj_set_style_text_color(ui_Label34, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label34, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen3_screen_init(void)
{

    // ui_Screen3

    ui_Screen3 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);

    // ui_backgroundscreen3

    ui_backgroundscreen3 = lv_btn_create(ui_Screen3);

    lv_obj_set_width(ui_backgroundscreen3, 354);
    lv_obj_set_height(ui_backgroundscreen3, 165);

    lv_obj_set_x(ui_backgroundscreen3, 2);
    lv_obj_set_y(ui_backgroundscreen3, -5);

    lv_obj_set_align(ui_backgroundscreen3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_backgroundscreen3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_backgroundscreen3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_backgroundscreen3, ui_event_backgroundscreen3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_backgroundscreen3, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backgroundscreen3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label35

    ui_Label35 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label35, 6);
    lv_obj_set_y(ui_Label35, -19);

    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label35, "SHUTTING DOWN");

    lv_obj_set_style_text_color(ui_Label35, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label35, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label35, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label36

    ui_Label36 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label36, 3);
    lv_obj_set_y(ui_Label36, 13);

    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label36, "ARE YOU SURE?");

    lv_obj_set_style_text_color(ui_Label36, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label36, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Menu4

    ui_Menu4 = lv_btn_create(ui_Screen3);

    lv_obj_set_width(ui_Menu4, 87);
    lv_obj_set_height(ui_Menu4, 26);

    lv_obj_set_x(ui_Menu4, 34);
    lv_obj_set_y(ui_Menu4, 45);

    lv_obj_set_align(ui_Menu4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Menu4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Menu4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Menu4, ui_event_Menu4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Menu4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Menu4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label37

    ui_Label37 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label37, 34);
    lv_obj_set_y(ui_Label37, 46);

    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label37, "RETURN");

    lv_obj_set_style_text_color(ui_Label37, lv_color_hex(0x008298), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label37, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label38

    ui_Label38 = lv_label_create(ui_Screen3);

    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label38, -45);
    lv_obj_set_y(ui_Label38, 46);

    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label38, "YES");

    lv_obj_set_style_text_color(ui_Label38, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label38, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen3_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

