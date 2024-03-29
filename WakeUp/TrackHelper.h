//
//  TrackHelper.h
//  WakeUp
//
//  Created by Stephen Johnson on 11/21/16.
//  Copyright © 2016 Nazca. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MeditationTrack.h"
#import "Chime.h"

@interface TrackHelper : NSObject
{
    
}

+ (TrackHelper*) sharedInstance;
- (NSArray*) getTracks;
- (NSInteger) getNumberOfTracks;
- (MeditationTrack*) trackAt:(int)index;
- (void) updateTracksArrayForUnlockedStatus;
- (Chime*) chimeAt:(NSUInteger)chimeIndex;

//Test helpers
- (void) unloadAllTracks; //To test the load Speed
- (void) reloadTracks;

@end
