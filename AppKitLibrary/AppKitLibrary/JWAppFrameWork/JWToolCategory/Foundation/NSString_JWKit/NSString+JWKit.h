//
//  NSString+JWKit.h
//  AppKitLibrary
//
//  Created by jinwei on 15/10/19.
//  Copyright © 2015年 jinwei group. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JWKit)
/**
 *  Search in a given string a substring from the start char to the end char (excluded form final string).
 *  Example: "This is a test" with start char 'h' and end char 't' will return "is is a "
 *
 *  @param string The string to search in
 *  @param start  The start char
 *  @param end    The end char
 *
 *  @return Returns the substring
 */
+ (NSString *)searchInString:(NSString *)string
                   charStart:(char)start
                     charEnd:(char)end;

/**
 *  Search in a given string a substring from the start char to the end char (excluded form final string).
 *  Example: "This is a test" with start char 'h' and end char 't' will return "is is a "
 *
 *  @param start  The start char
 *  @param end    The end char
 *
 *  @return Returns the substring
 */
- (NSString *)searchCharStart:(char)start
                      charEnd:(char)end;

/**
 *  Returns the index of the given character
 *
 *  @param character The character to search
 *
 *  @return Returns the index of the given character, -1 if not found
 */
- (NSInteger)indexOfCharacter:(char)character;

/**
 *  Creates a substring from the given character
 *
 *  @param character The character
 *
 *  @return Returns the substring from character
 */
- (NSString *)substringFromCharacter:(char)character;

/**
 *  Creates a substring to the given character
 *
 *  @param character The character
 *
 *  @return Returns the substring to character
 */
- (NSString *)substringToCharacter:(char)character;

/**
 *  Create a MD5 string from self
 *
 *  @return Returns the MD5 NSString from self
 */
- (NSString *)MD5;

/**
 *  Create a SHA1 string from self
 *
 *  @return Returns the SHA1 NSString from self
 */
- (NSString *)SHA1;

/**
 *  Create a SHA256 string from self
 *
 *  @return Returns the SHA256 NSString from self
 */
- (NSString *)SHA256;

/**
 *  Create a SHA512 string from self
 *
 *  @return Returns the SHA512 NSString from self
 */
- (NSString *)SHA512;

/**
 *  Check if self has the given substring in case-sensitive
 *
 *  @param substring The substring to be searched
 *
 *  @return Returns YES if founded, NO if not
 */
- (BOOL)hasString:(NSString *)substring;

/**
 *  Check if self has the given substring specifying if is case-sensitive or not
 *
 *  @param substring     The substring to be searched
 *  @param caseSensitive If the search has to be case-sensitive or not
 *
 *  @return Returns YES if founded, NO if not
 */
- (BOOL)hasString:(NSString *)substring caseSensitive:(BOOL)caseSensitive;

/**
 *  Check if self is an email
 *
 *  @return Returns YES if it's an email, NO if not
 */
- (BOOL)isEmail;

/**
 *  Check if the given string is an email
 *
 *  @param email The string to be checked
 *
 *  @return Returns YES if it's an email, NO if not
 */
+ (BOOL)isEmail:(NSString *)email;

/**
 *  Convert a string to UTF8
 *
 *  @param string String to be converted
 *
 *  @return Returns the converted string
 */
+ (NSString *)convertToUTF8Entities:(NSString *)string;

/**
 *  Encode the given string to Base64
 *
 *  @param string String to encode
 *
 *  @return Returns the encoded string
 */
+ (NSString *)encodeToBase64:(NSString *)string;

/**
 *  Encode the given string to Base64
 *
 *  @return Returns the encoded string
 */
- (NSString *)encodeToBase64;

/**
 *  Decode the given Base64 to string
 *
 *  @param string String to decode
 *
 *  @return Returns the decoded string
 */
+ (NSString *)decodeBase64:(NSString *)string;

/**
 *  Decode the given Base64 to string
 *
 *  @return Returns the decoded string
 */
- (NSString *)decodeBase64;

/**
 *  Conver self to a capitalized string.
 *  Example: "This is a Test" will return "This is a test" and "this is a test" will return "This is a test"
 *
 *  @return Returns the capitalized sentence string
 */
- (NSString *)sentenceCapitalizedString;

/**
 *  Returns a human legible string from a timestamp
 *
 *  @return Returns a human legible string from a timestamp
 */
- (NSString *)dateFromTimestamp;

/**
 *  Encode self to an encoded url string
 *
 *  @return Returns the encoded NSString
 */
- (NSString *)urlEncode DEPRECATED_MSG_ATTRIBUTE("Use -URLEncode");

/**
 *  Encode self to an encoded url string
 *
 *  @return Returns the encoded NSString
 */
- (NSString *)URLEncode;

/**
 *  Remove double or more duplicated spaces
 *
 *  @return String without additional spaces
 */
- (NSString *)removeExtraSpaces;

/**
 *  Returns a new string containing matching regular expressions replaced with the template string
 *
 *  @param regexString The regex string
 *  @param replacement The replacement string
 *
 *  @return Returns a new string containing matching regular expressions replaced with the template string
 */
- (NSString *)stringByReplacingWithRegex:(NSString *)regexString withString:(NSString *)replacement;

/**
 *  Convert HEX string (separated by space) to "usual" characters string.
 *	"68 65 6c 6c 6f" -> "hello"
 *
 *  @return Readable string
 */
- (NSString *)HEXToString;

- (NSString *)stringToHEX;
@end
