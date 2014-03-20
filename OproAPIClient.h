//
//  OproClient.h
//  
//
//  Created by Richard Schneeman on 8/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFHTTPSessionManager.h>

@interface OproAPIClient : AFHTTPSessionManager

@property (nonatomic, assign) BOOL isAuthenticated;

+ (instancetype)sharedClient;

- (void)createRandomUserWithSuccess:(void (^) (NSString *username, NSString *password))success
                            failure:(void (^)(NSError *error))failure;
- (void)authenticateUsingOAuthWithUsername:(NSString *)username
                                  password:(NSString *)password
                                   success:(void (^)(NSString *accessToken, NSString *refreshToken))success
                                   failure:(void (^)(NSError *error))failure;
- (void)logout;

// Credentials for the opro demo server you will can modify oClientID and oClientSecret
//#define oClientBaseURLString @"https://opro-demo.herokuapp.com/"
//#define oClientID            @"bd443d6eb471fb36fb80481079bbc226"
//#define oClientSecret        @"0065ff3ac5940e42577756e0d8a74272"

// Credentials if the server is local, you will need to modify oClientID and oClientSecret
#define oClientBaseURLString @"http://localhost:3000/"
#define oClientID            @"f240757f98edee3d25baf9c248c7b274"
#define oClientSecret        @"61c8566606b2fd995dc5eaafb3d8a9cd"

//Name:	iPhone_app
//Client Id:	445b513f18bc582ce315823231bfa7ad
//Secret:	ce9a45197b5014b2297c4568508caa2d



@end
