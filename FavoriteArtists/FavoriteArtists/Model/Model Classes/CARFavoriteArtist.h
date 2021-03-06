//
//  CARFavoriteArtist.h
//  FavoriteArtists
//
//  Created by Chad Rutherford on 2/21/20.
//  Copyright © 2020 Chad Rutherford. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CARFavoriteArtist : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int yearFormed;
@property (nonatomic, copy) NSString *biography;

- (instancetype) initWithName:(NSString *)name
                   yearFormed:(int)yearFormed
                    biography:(NSString *)biography;

- (instancetype) initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
