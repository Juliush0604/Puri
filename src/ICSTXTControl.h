/*
 * Copyright 2011-2011 Haiku Inc. All rights reserved.
 * Distributed under the terms of the MIT License.
 *
 * Authors:
 *		Ciprian Nedisan (cipri)
 *
 */
#ifndef ICSTXTCONTROL_H
#define ICSTXTCONTROL_H

#include <Button.h>
#include <GroupView.h>
#include <Locker.h>
#include <Message.h>
#include <ScrollBar.h>
#include <String.h>
#include <TextView.h>
#include <TextControl.h>

#include "Debug.h"

class ICSTXTControl : public BGroupView
{
public:
                    ICSTXTControl(void);
    virtual void    AttachedToWindow(void);
    virtual void    MessageReceived(BMessage* message);
    void            AddTxt(BString const& str);

    enum{ M_SEND_BUTTON = 'isb1' };
private:
    BScrollBar*     fScrollBar;
    BTextView*      fTxtView;
    BTextControl*   fTxtControl;

    BButton*        fSendButton;
    bool            fIsFocus;

    BLocker         fLocker;
    Debug           out;

};


#endif // ICSTXTCONTROL_H
