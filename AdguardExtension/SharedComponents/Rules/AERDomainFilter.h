/**
    This file is part of Adguard for iOS (https://github.com/AdguardTeam/AdguardForiOS).
    Copyright © 2015-2017 Performix LLC. All rights reserved.
 
    Adguard for iOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
 
    Adguard for iOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with Adguard for iOS.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "ACommons/ACNetwork.h"
#import "AERDomainFilterRule.h"

/// Filters URLs
@interface AERDomainFilter  : NSObject

/////////////////////////////////////////////////////////////////////
#pragma mark -  Init and Class methods
/////////////////////////////////////////////////////////////////////

/// Main Create Method (constructor)
+ (AERDomainFilter *)filter;

/////////////////////////////////////////////////////////////////////
#pragma mark -  Properties and public methods
/////////////////////////////////////////////////////////////////////

/// Adds rule to Domain Filter
- (void)addRule:(AERDomainFilterRule *)rule;

/// Returns filtering rule if request is filtered or nil if nothing found.
- (AERDomainFilterRule *)filteredDomain:(NSString *)domain;

@end
