//
//  SOLWundergroundDownloader.h
//  Sol
//
//  Created by Comyar Zaheri on 8/7/13.
//  Copyright (c) 2013 Comyar Zaheri. All rights reserved.
//

@class SOLWeatherData;

// Block Definition
typedef void (^SOLWeatherDataDownloadCompletion)(SOLWeatherData *data, NSError *error);

/**
 SOLWundergroundDownloader is a singleton object that queries the Wunderground Weather API and downloads weather
 data for a given location.
 */
@interface SOLWundergroundDownloader : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>


////////////////////////////////////////////////////
// @name Initializing a Wunderground Downloader
////////////////////////////////////////////////////

/**
 Returns a shared instance of SOLWundergroundDownloader
 @returns A shared instance of SOLWundergroundDownloader
 */
+ (SOLWundergroundDownloader *)sharedDownloader;


////////////////////////////////////////////////////
// @name Using a Wunderground Downloader
////////////////////////////////////////////////////

/**
 Queries the Wunderground Weather API and downloads weather data for the given location
 @param location    Location to download weather data for
 @param completion  Block that returns a SOLWeatherData object on success, and nil on failure
 */
- (void)dataForLocation:(CLLocation *)location completion:(SOLWeatherDataDownloadCompletion)completion;

@end
