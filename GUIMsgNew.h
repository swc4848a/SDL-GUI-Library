//
//  GUIMsgNew.h
//  Coin Checkers 2
//
//  Created by Nathan Daly on 11/19/12.
//  Copyright (c) 2012 Lions Entertainment. All rights reserved.
//

#ifndef Coin_Checkers_2_GUIMsgNew_h
#define Coin_Checkers_2_GUIMsgNew_h

#include "GUIView.h"

#include <string>
#include <vector>

class GUIButton;
class GUITextView;

class GUIMsgNew : public GUIView {
public:
    typedef std::vector<GUIButton*> Button_ctrs_t;
    
    // Size of button_texts must == num_buttons
    GUIMsgNew(int w_, int h_, const std::string& msg = "", Button_ctrs_t buttons = Button_ctrs_t()); 
    
    void set_msg(const std::string msg_);

    void add_button(GUIButton* button);

    virtual void pop_up(int timeout = -1) = 0; // ms until window disappears.
    
private:
    
    std::vector<GUIButton*> buttons;
    GUITextView *msg_text;
};

class GUIMsgNew_Scroll_In : public GUIMsgNew {
public:
    typedef std::vector<GUIButton*> Button_ctrs_t;

    // Size of button_texts must == num_buttons
    GUIMsgNew_Scroll_In(int w_, int h_, const std::string& msg = "", Button_ctrs_t buttons = Button_ctrs_t()); 
        
    virtual void pop_up(int timeout = -1) = 0; // ms until window disappears.
    
};


#endif