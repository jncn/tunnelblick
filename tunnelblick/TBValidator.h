/*
 * Copyright 2024 Jonathan K. Bullard. All rights reserved.
 *
 *  This file is part of Tunnelblick.
 *
 *  Tunnelblick is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2
 *  as published by the Free Software Foundation.
 *
 *  Tunnelblick is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program (see the file COPYING included with this
 *  distribution); if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *  or see http://www.gnu.org/licenses/.
 */

#import <Foundation/Foundation.h>

#import "defines.h"


NS_ASSUME_NONNULL_BEGIN

@interface TBValidator : NSObject {

    id logger;  // Log messages via [logger 
}

-(TBValidator *) initWithLogger: (id) logger;

-(BOOL) validateAppcastData: (NSData *)   data
           withPublicDSAKey: (NSString *) pkeyString;

-(BOOL) validateUpdateData: (NSData *) data
             withSignature: (NSString *) signature
          withPublicDSAKey: (NSString *) pkeyString;

@end

NS_ASSUME_NONNULL_END
