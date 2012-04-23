//
// Constants.m
// MailForce
//
// Created by Daniel Jimenez on 7/9/11.
/* 
 ------------------------------------
 Copyright (c) 2006-2008 Simon Fell
 
 Permission is hereby granted, free of charge, to any person obtaining a
 copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import "Constants.h"


NSString *ADD_EMAIL_SCRIPT_NAME = @"Add Email to Salesforce.com";
NSString *ADD_CASE_SCRIPT_NAME  = @"Create Case In Salesforce.com";

NSString *MAIL_SCRIPTS_FOLDER      = @"mail scripts";
NSString *ENTOURAGE_SCRIPTS_FOLDER = @"entourage scripts";
NSString *OUTLOOK_SCRIPTS_FOLDER   = @"outlook scripts";

NSString *ADD_EMAIL_TO_DESC_PREF    = @"addEmailToTaskDescription";
NSString *SHOW_NEW_CASE_PREF        = @"showNewCase";
NSString *SHOW_NEW_EMAIL_PREF       = @"showNewEmail";
NSString *ATTACHMENTS_ON_CASES_PREF = @"addAttachmentsToCases";
NSString *ATTACHMENTS_ON_EMAIL_PREF = @"addAttachmentsToActivities";
NSString *DEFAULT_TASK_STATUS_PREF  = @"defaultTaskStatus";

NSString *SHOW_TASK_RELATEDLIST_WARNING_PREF = @"showTaskRelatedListWarning";

NSString *AUTO_SHOW_HIDE_BUTTONBAR = @"autoShowHideButtonBar";

NSString *LEAD    = @"Lead";
NSString *CONTACT = @"Contact";
NSString *ACCOUNT = @"Account";
NSString *CASE    = @"Case";

NSString *APPEND_TO_CASE = @"Append to existing Case in SalesForce.com";
NSString *APPEND_TO_CASE_SHORT = @"Append";

NSString *CASE_REF_REGEX = @"ref:([[:alnum:]]*)\\.((500[[:alnum:]])([[:alnum:]]{5})):ref";

NSString *MESSAGE_PARSE_ERROR = @"Internal error parsing email message";
NSString *REPORT_ERROR_TO_DEVELOPER = @"Please report this message to the developer (daniel.j.jimenez@gmail.com).";
NSString *TOO_MANY_MESSAGES = @"Too many messages...";

