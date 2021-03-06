/* $Id: FirstViewController.h 369517 2012-07-01 17:28:57Z file $ */
/* 
 * Copyright (C) 2010-2011 Teluu Inc. (http://www.teluu.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */
#import <UIKit/UIKit.h>


@interface FirstViewController : UIViewController<UITextFieldDelegate> {
    IBOutlet UITextField *textField;
    IBOutlet UITextView  *textView;
    IBOutlet UIButton	 *button1;

    NSString		 *text;
    bool		 hasInput;
}

@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) IBOutlet UIButton *button1;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) bool hasInput;

@end
