/* FastAddressBook.h
 *
 * Copyright (C) 2011  Belledonne Comunications, Grenoble, France
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or   
 *  (at your option) any later version.                                 
 *                                                                      
 *  This program is distributed in the hope that it will be useful,     
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of      
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       
 *  GNU General Public License for more details.                
 *                                                                      
 *  You should have received a copy of the GNU General Public License   
 *  along with this program; if not, write to the Free Software         
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */     

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

@interface FastAddressBook :  NSObject {
    NSMutableDictionary* addressBookMap;  
    
    ABAddressBookRef addressBook;
}

+ (BOOL)isSipURI:(NSString*)address;
+ (NSString*)getContactDisplayName:(ABRecordRef)contact;
+ (UIImage*)getContactImage:(ABRecordRef)contact thumbnail:(BOOL)thumbnail;
- (ABRecordRef)getContact:(NSString*)address;
- (void)reload;
- (void)saveAddressBook;
+ (BOOL)isAuthorized;
+ (NSString*)appendCountryCodeIfPossible:(NSString*)number;
+ (NSString*)normalizePhoneNumber:(NSString*)number;
+ (NSString*)normalizeSipURI:(NSString*)address;


// TOOLS

+(NSString*)localizedLabel:(NSString*)label;

@end
